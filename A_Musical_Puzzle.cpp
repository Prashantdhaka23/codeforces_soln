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

int main(){
ll t=1;
cin>>t;
while(t--){
long long  n=0,m=0,a=0,b=0,ans=0,res=0;
// cin>>n>>m;
    // vector<vector<int> > v(n,vector<int> (m,0));
// for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//         cin>>v[i][j];
//     }
// }
// string g="NO";
cin>>n;

string s;
cin>>s;
// vector<int> v(n,0);
// for(int i=0;i<n;i++){
//   cin>>v[i];
// }
// vector<int> v2(n,0);
map<string,int> mp;
for(int i=0;i<n-1;i++){
     string x=to_string(s[i]);
     x+=s[i+1];
     mp[x]++;
}
cout<<mp.size()<<endl;
















}
return 0;
}





     









