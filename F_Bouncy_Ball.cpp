
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
cin>>t;

while(t--){
ll n,m,a,b,x,y ;

cin>>n>>m>>a>>b>>x>>y;
int dp[n+1][m+1][2][2];
memset(dp,0,sizeof(dp));

string s;
cin>>s;
int c=0;
int d=0;
if(s[0]=='D')d=1;
else d=-1;
if(s[1]=='L')c=-1;
else c=1;
int ans=0;
int f=0;
if(a==n && d==1){d=(-1);
f=1;}
else if(a==1 && d==-1){d=(1);
f=1;}

if(b==m && c==1){c=(-1);
f=1;}
else if(b==1 && c==-1){c=(1);
f=1;}
if(f)ans++;
if(a==x && b==y)ans=0;


while(a!=x || b!=y ){

 f=0;
a+=d;
b+=c;
int l=0,g=0;
if(d==-1)l=0;
else l=1;
if(c==-1)g=0;
else g=1;
if(dp[a][b][l][g]==1){
     ans=-1;break;}

// cout<<a<<" "<<b<<endl;

     if(a==n && d==1){d=(-1);
f=1;}
else if(a==1 && d==-1){d=(1);
f=1;}

if(b==m && c==1){c=(-1);
f=1;}
else if(b==1 && c==-1){c=(1);
f=1;}

if(a==x && b==y)break;
// cout<<a<<" "<<b<<endl;
if(f)ans++;
dp[a][b][l][g]=1;



}
cout<<ans<<endl;







}
return 0;
}







     










