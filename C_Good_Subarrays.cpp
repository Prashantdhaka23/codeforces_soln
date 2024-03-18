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

long long mod=1e9+7;
ll pwr(ll a, ll b) { ll res = 1; a=a%mod; while (b > 0) {if (b & 1) res = res * a ; a = a * a ;a=a%mod; res=res%mod; b >>= 1;} return res;}

int main(){
ll t;
cin>>t;
while(t--){
long long  n,m;
cin>>n;
// cin>>m;
string s;
cin>>s;
vector<int> v(n,0);
map<int,int> mp;
mp[0]=1;
long long  ans=0;

for(int i=0;i<n;i++){
v[i]=int(s[i]-'0');
v[i]--;

}
ans+=mp[v[0]];
mp[v[0]]++;
for(int i=1;i<n;i++){
v[i]+=v[i-1];
ans+=mp[v[i]];
mp[v[i]]++;
}

cout<<ans<<endl;


}
return 0;
}





     









