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
//  long long  mod=1e9+7;






}

}