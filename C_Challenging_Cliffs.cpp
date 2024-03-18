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
 
 int main(){

ll t=1;
// cin>>t;
while(t--){
ll a,b,n,m,ans=0;
cin>>n;
int x=1e5+5;
vector<int> v(n+1,0);
vector<int> hash(x+1,0);
vector<vector<ll> > dp(2,vector<ll>(x+1,0));

for(int i=0;i<n;i++){cin>>v[i];
hash[v[i]]++;}
 ans=0;
for(int i=1;i<x;i++){
     dp[0][i]=dp[1][i-1]+(1ll*hash[i]*i);
     dp[1][i]=max(dp[0][i-1],dp[1][i-1]);
     ans=max(ans,dp[0][i]);
     ans=max(ans,dp[1][i]);

}

cout<<ans<<endl;


}






return 0;
}







     








