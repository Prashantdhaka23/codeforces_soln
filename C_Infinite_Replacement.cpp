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
// string g="NO";
// cin>>n>>m;
// vector<vector<int> > v(n,vector<int> (m,0));
// for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//         cin>>v[i][j];
//     }
// }
string s;
cin>>s;
string st;
cin>>st;
// cin>>n;
// vector<int> v(n,0);
// vector<int> v2(n,0);
// map<char,int> mp;
// for(int i=0;i<n;i++){
//   cin>>v[i];
// }
map<char,int> mp;
map<char,int> m1;
mp.clear();
m1.clear();


for(int i=0;i<s.size();i++){
     mp[s[i]]++;
}
for(int i=0;i<st.size();i++){
     m1[st[i]]++;
}


if(m1.find('a')== m1.end()){
     ll c=1;
cout<<pwr(2LL,1LL*mp['a'])<<endl;
}
else {
     if(st=="a")cout<<1<<endl;
     else if(mp.find('a')==mp.end())cout<<1<<endl;
else cout<<-1<<endl;
}








}
return 0;
}





     









