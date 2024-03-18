#include<bits/stdc++.h>
// map<int,int> mp;

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
#define mp2 make_pair

long long mod=1e9+7;
ll pwr(ll a, ll b) { ll res = 1; a=a%mod; while (b > 0) {if (b & 1) res = res * a ; a = a * a ; b >>= 1;} return res;}
void solve(){

}
int dfs(int i, vector<vector<int> > & adj,map<pair<int,int>,int > & mp,int p,vector<int> & vis){

int ans=0;
// int f=0;
vis[i]=1;
for(int j=0;j<adj[i].size();j++){

int a=adj[i][j];
if(vis[a]==1)continue;

if(  mp[mp2(i,a)]>p){
     ans=max(ans,dfs(a,adj,mp,mp[mp2(i,a)],vis));

}

else{
     // cout<<f<<endl;
     ans=max(ans,1+dfs(a,adj,mp,mp[mp2(i,a)],vis));
// cout<<4<<endl;

}
}
// if(f==0)return f;

return ans;









}

int main(){
ll t=1;
cin>>t;
map<pair<int,int>,int > mp;

while(t--){
int n=0;
cin>>n;

vector<vector<int> > adj(n+1);
mp.clear();
for(int i=0;i<n-1;i++){
int x,y;
cin>>x>>y;
adj[x].push_back(y);
adj[y].push_back(x);
mp[mp2(x,y)]=i+1;
mp[mp2(y,x)]=i+1;

}
vector<int> vis(n+1,0);
cout<<1+dfs(1,adj,mp,-1,vis)<<endl;








}
return 0;
}





     









