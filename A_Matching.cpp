#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9 + 7;
const ll MOD = 1e18 + 1e16;
ll mod_mul(ll a, ll b) {a = a % mod; b = b % mod; return (((a * b) % mod) + mod) % mod;}
 
ll inv(ll i) {if (i == 1) return 1; return (mod - ((mod / i) * inv(mod % i)) % mod) % mod;}
 

int main() {
	 int t;
	 vector<int> v(1e5+5,0);
	 long long x=1;
	 long long mod=1e9+7;
	 for(int i=1;i<1e5+1;i++){
	     x=x*i;
	     x=x%mod;
	     v[i]=x;
	 }
	 cin>>t;
	 while(t--){
	     ll n;
	     cin>>n;
	     map<long long ,long long > mp;
	    while(n>0){
	        n--;
	        long long  x,y;
	        cin>>x>>y;
	        mp[x]++;
	    }
	      long long ans=0;
	    for(auto [a,b]:mp){
	        ans+=b*v[a];
	        ans=ans%mod;
	    }
	    ll f=inv(v[n]);
	    ans=ans*f;
	    ans=ans%mod;
	    cout<<ans<<endl;
	    
	    
	  
	    
	    
	    
	 }
	return 0;
}
