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

long long mod=1e9+7;
ll pwr(ll a, ll b) { ll res = 1; a=a%mod; while (b > 0) {if (b & 1) res = res * a ; a = a * a ;a=a%mod; res=res%mod; b >>= 1;} return res;}

int main(){
ll t=1;
// cin>>t;
while(t--){
long long  n,m=0;
// cin>>n >> m;
string s;
cin>>s;
// vector<int> v(n,0);
map<char,int> mp;

int t=0;
int a=-1,b=-1,c=-1;


for(int i=0;i<8;i++){
if(s[i]=='K'){
     a=i;
}
if(s[i]=='R' && b==-1){
     b=i;
}
if(s[i]=='R' && b!=-1){
     c=i;
}
// if(mp[i]!=)

if( s[i]=='B' && mp.find(s[i])!=mp.end() && (mp[s[i]]%2!=i%2) ){
     t=1;
}
mp[s[i]]=i;

}
// cout<<t<<" "<<a<<" "<<b<<" "<<c<<" ";
if( a!=-1 && b!=-1 && c!=-1 && t && (b<a) && (c>a)){
     cout<<"Yes"<<endl;
}else{
      cout<<"No"<<endl;
}






}
return 0;
}





     









