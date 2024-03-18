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
ll pwr(ll a, ll b) { ll res = 1; a=a%mod; while (b > 0) {if (b & 1) res = res * a ; a = a * a ; b >>= 1;} return res;}
void solve(){
    return ;
}
int dfs(int i,vector<int> & v1,vector<int> & v,vector<int> & b,int & f,int p){
v1[i]=1;
b[i]=1;
int x=1;
if( v1[v[i]]==0){
     x+=dfs(v[i],v1,v,b,f,i);
}
else if( p==v[i] ){
     f=1;
}else if(b[v[i]]==0){
     f=2;
}
return x;
}

int main(){
ll t=1;
cin>>t;
while(t--){
long long  n=0,m=0,a=0,b=0,ans=0,res=0;
cin>>n>>m;
    // vector<vector<int> > v(n,vector<int> (m,0));
// for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//         cin>>v[i][j];
//     }
// }
string g="YES";
// cin>>n;
map<int,int> mp;
map<int,int> mp1;

vector<int> v;
vector<int> v1;
vector<int> v2;
v3.pb(1);
for(int i=0;i<n;i++){
 int k;
 cin>>k;
     mp[v[i]]++;
     if(mp[k]==1){v1.pb(k);
     mp1[k]=v1.size()-1;}
     v.pb(k);
}
int j=1;
for(int i=0;i<v1.size();i++){
     v2.pb(v2[j-1]*mp[v1[i]]);
     j++;
}
sort(all(v));
 ans=0;

for(int i=0;i<v.size();i++){
     int x=lower_bound(v.begin(),v.end(),m+v[i])-v.begin();
     int y=lower_bound(v1.begin(),v1.end(),m+v[i])-v1.begin();
     int l=(y-mp[v[i]]);
     int d=ncr(l,m-1)*();


}




































}
return 0;
}





     









