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
ll t;
cin>>t;
while(t--){
long long  n,m=0;
cin>>n >> m;
int x1,y1,x2,y2;
cin>>x1>>x2>>y1>>y2;
int ans=-1;
if(x1==1 && x2==1 || x1==n && x2==1 ||   x1==1 && x2==m ||  x1==n && x2==m ){
ans=2;
}
else if(y1==1 && y2==1 || y1==n && y2==1 ||   y1==1 && y2==m ||  y1==n && y2==m ){
ans=2;
}
else if(y1==1 ||  y2==1 || y1==n  ||  y2==m ){
ans=3;
}
else if(x1==1 ||  x2==1 || x1==n  ||  x2==m ){
ans=3;
}
else{
     ans=4;
}
cout<<ans<<endl;
for(auto it : mp){
     cout<<it<<endl;
}





}
return 0;
}





     









