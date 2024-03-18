#include<bits/stdc++.h>
using namespace std;
# define ll long long 
# define  fo(i,n) for(int i=0;i<n;i++)
long long  gcdExtended(long long  a, long long  b, long long  *x,  long long *y)
{
    // Base Case
    if (a == 0)
    {
        *x = 0, *y = 1;
        return b;
    }
 
    long long x1, y1; // To store results of recursive call
    long long  gcd = gcdExtended(b%a, a, &x1, &y1);
 
    // Update x and y using results of recursive
    // call
    *x = y1 - (b/a) * x1;
    *y = x1;
 
    return gcd;
}
    
bool isPrime(long long n)
{
    // Corner case
    if (n <= 1)
        return 0;
 
    // Check from 2 to n-1
    for (int i = 2; i < sqrt(n); i++)
        if (n % i == 0)
            return false;
 
    return true;
}

int gcd(int a, int b)
{
    int result = min(a, b); // Find Minimum of a nd b
    while (result > 0) {
        if (a % result == 0 && b % result == 0) {
            break;
        }
        result--;
    }
    return result; // return gcd of a nd b
}
 long long modInverse(long long  b, long long  m)
{
    long long  x, y; // used in extended GCD algorithm
    long long  g = gcdExtended(b, m, &x, &y);
 
    // Return -1 if b and m are not co-prime
    if (g != 1)
        return -1;
 
    // m is added to handle negative x
    return (x%m + m) % m;
}
 
// Function to compute a/b under modulo m
long long modDivide(long long  a, long long b, long long m)
{
    a = a % m;
    long long inv = modInverse(b, m);
    if (inv == -1)
      return -1;
    
    else
       return (inv * a) % m;
}
    

 int main(){
int t;
cin>>t;
while(t--){
long long  n,m,ans=0;
//  long long  m=1e9+7;
cin>>n;
vector<int> v(n,0);
set<int> s;
int cnt=1;
long long l=1 ;
for(int i=0;i<n;i++){
    cin>>v[i];
     s.insert(v[i]);

}
l=v[0];
for(int i=1;i<n;i++){
  l=(l*v[i])/gcd(l,v[i]);

}
for(int i=0;i<n;i++){
   for(int j=1;j<n;j++){
     if(gcd(v[i]+4,v[j]+4)!=1){
          cnt=0;
          break;
     }
   }

}





 if(cnt==1){  
  
cout<<"YES"<<endl;
 }else{
cout<<"NO"<<endl;


 }






}

}