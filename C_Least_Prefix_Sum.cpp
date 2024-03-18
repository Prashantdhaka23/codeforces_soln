#include<bits/stdc++.h>
using namespace std;
# define ll long long 
# define  fo(i,n) for(int i=0;i<n;i++)
#define all(v) (v).begin(),(v).end()
#define sort0(v) sort(all(v))
#define pb push_back
#define mp make_pair

// long long  gcdExtended(long long  a, long long  b, long long  *x,  long long *y)
// {
//     // Base Case
//     if (a == 0)
//     {
//         *x = 0, *y = 1;
//         return b;
//     }
 
//     long long x1, y1; // To store results of recursive call
//     long long  gcd = gcdExtended(b%a, a, &x1, &y1);
 
//     // Update x and y using results of recursive
//     // call
//     *x = y1 - (b/a) * x1;
//     *y = x1;
 
//     return gcd;
// }
    

// int gcd(int a, int b)
// {
//     int result = min(a, b); // Find Minimum of a nd b
//     while (result > 0) {
//         if (a % result == 0 && b % result == 0) {
//             break;
//         }
//         result--;
//     }
//     return result; // return gcd of a nd b
// }
//  long long modInverse(long long  b, long long  m)
// {
//     long long  x, y; // used in extended GCD algorithm
//     long long  g = gcdExtended(b, m, &x, &y);
 
//     // Return -1 if b and m are not co-prime
//     if (g != 1)
//         return -1;
 
//     // m is added to handle negative x
//     return (x%m + m) % m;
// }
 
// // Function to compute a/b under modulo m
// long long modDivide(long long  a, long long b, long long m)
// {
//     a = a % m;
//     long long inv = modInverse(b, m);
//     if (inv == -1)
//       return -1;
    
//     else
//        return (inv * a) % m;
// }
    

 int main(){
ll t;
cin>>t;
while(t--){
long long  n,m,ans=0;
cin>>n>>m;
    vector<ll>  v(n);
    long long sum=0;
    vector<int> k;

    priority_queue<int,vector<int>,greater<int> >pq;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    if(v[m-1]<=0){
        sum=v[m-1];
    }
    else if(m!=1){
        sum=-1*v[m-1];
        ans++;
    }
    priority_queue<int>pq2;
    for(int i=m-2;i>=1;i--){
        if(v[i]>0) pq2.push(v[i]);
        sum+=v[i];
        while(sum>0){
            int p=pq2.top();
            pq2.pop();
          sum+=-2*p;
            ans++;
        }
    }
sum=0;

    for(int i=m;i<n;i++){
        if(v[i]<0) pq.push(v[i]);
        sum+=v[i];
        while(sum<0){
            int t=pq.top();
            sort(k.begin(),k.end());
            pq.pop();

         
            sum+=-2*t;
            ans++;
        }
    }
    
    
    cout<<ans<<endl;
}
 



}











