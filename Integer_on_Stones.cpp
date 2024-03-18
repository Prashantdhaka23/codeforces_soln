#include<bits/stdc++.h>
using namespace std;
# define ll long long 
# define py cout<<"Yes"<<endl;
# define pn cout<<"No"<<endl;
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}
// map<int,int> mp;
// std::map<int,int>::iterator it;
// for( it=mp.begin();it!= mp.end();it++){

// }
#define lb lower_bound
#define ub upper_bound
#define fo(i,a,b) for(int i=a;i<b;i++)
#define all(v) (v).begin(),(v).end()
#define pb push_back
#define ppb pop_back
#define mp make_pair

long long mod=1e9+7;
ll pwr(ll a, ll b) { ll res = 1; a=a%mod; while (b > 0) {if (b & 1) res = res * a ; a = a * a ;a=a%mod; res=res%mod; b >>= 1;} return res;}


// A modular inverse based solution to
// compute nCr % p
    unsigned long long fac[100007];

 
/* Iterative Function to calculate (x^y)%p
in O(log y) */
unsigned long long power(unsigned long long x,
                                  int y, int p)
{
    unsigned long long res = 1; // Initialize result
 
    x = x % p; // Update x if it is more than or
    // equal to p
 
    while (y > 0)
    {
     
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res * x) % p;
 
        // y must be even now
        y = y >> 1; // y = y/2
        x = (x * x) % p;
    }
    return res;
}
 
// Returns n^(-1) mod p
unsigned long long modInverse(unsigned long long n, 
                                            int p)
{
    return power(n, p - 2, p);
}
unsigned long long nCrModPFermat(unsigned long long n,
                                 int r, int p)
{
    // If n<r, then nCr should return 0
    if (n < r)
        return 0;
    // Base case
    if (r == 0)
        return 1;
 
    // Fill factorial array so that we
    // can find all factorial of r, n
    // and n-r
    fac[0] = 1;
  
 
    return (fac[n] * modInverse(fac[r], p) % p
            * modInverse(fac[n - r], p) % p)
           % p;
}

 
// Returns n^(-1) mod p

// Returns nCr % p using Fermat's little
// theorem.



int main(){
ll t=1;
cin>>t;
fac[0]=1;
for(ll i=1;i<1e5+2;i++){
    fac[i]=fac[i-1]*i;
    fac[i]=fac[i]%mod;
}
while(t--){
long long  n,m=0,a,b,ans=0,res=0;
// string g="NO";
cin>>n;
// cin>>n>>m;
// string s;
// cin>>s;
vector<int> v(n,0);
// vector<int> v2(n,0);
// int x=0;
 map<int,int> mp;

for(int i=0;i<n;i++){
     cin>>v[i];

}
ll mod=1e9+7;
sort(all(v));
 ans=0;
   ll y=0 ;
  ll z=1;
  ll pc[100002];
  pc[n]=1;

 while(y<=n){
     pc[y]=z;
     z=z*2LL;
     z=z%mod;
     y++;

    
 }
for(int i=1;i<=n;i++){
    // if(mp.find(v[i-1])!=mp.end())continue;

  z=pc[n-i];
  ll x=v[i-1];
  ll f=0;
if(i-1>=x-1)
{

ll g=1LL*fac[i-1];
g=g%mod;

ll dd=power(fac[x-1],mod-2,mod);
ll de=power(fac[i-x],mod-2,mod);
g=g*de;
g=g%mod;

g=g*dd;
g=g%mod;
if(x==1)f=1;
else f=g;

}
f=f%mod;
   ans+=(f*z)%mod;
   ans=ans%mod;

    
}
cout<<ans<<endl;




}
return 0;
}





     








