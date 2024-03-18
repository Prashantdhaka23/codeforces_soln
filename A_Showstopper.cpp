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
// string s;
// cin>>s;
vector<int> v(n,0);
vector<int> v1(n,0);

int x=INT_MIN;
int a=0;
for(int i=0;i<n;i++){
     cin>>v[i];
     x=max(x,v[i]);
}
for(int i=0;i<n;i++){
     cin>>v1[i];
     x=max(x,v1[i]);
}
int y=min(v[n-1],v1[n-1]);
for(int i=0;i<n;i++){

if(v[i]<=y || v1[i]<=y){
   a++;
}



}
if( a==n && (x==v[n-1] || x==v1[n-1]))py
else pn
// map<char,int> mp;




}
return 0;
}





     









