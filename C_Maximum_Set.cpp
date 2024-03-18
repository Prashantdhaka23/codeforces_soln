
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
long long u=998244353;
long long  dp[1000001];
ll inv(ll i) {if (i == 1) return 1; return (u - ((u / i) * inv(u % i)) % u) % u;}



int fun(int x,int y){

long long ans=(dp[x]%u)*((inv(dp[x-y])%u)*(inv(dp[y])%u))%u;

return ans%u;

}
 
 int main(){

ll t=1;
cin>>t;
dp[0]=1;
dp[1]=1;
for(int i=2;i<1000001;i++){
     dp[i]=dp[i-1]*i;
     dp[i]=dp[i]%u;
}


while(t--){
ll n ,m;
cin>>n>>m;
// vector<int> v(n,0);
// for(int i=0;i<n;i++)cin>>v[i];

int x=1;
int l=n;
while(l*2<=m){
     x++;
     l=l*2;    
}

long long ans=0;
int o=pow(2,x-1);
int h=0;
if(x>=2)h=pow(2,x-2);
// cout<<o<<" "<<h<<endl;

for(int j=n;j<=m;j++){
int y=j*o;

if(y<=m){

int d=1;
     while(1){
int w=y/pow(2,d);
w=w*3;
int b=0;
if(h>0){
   b=m/w;  
}
if(b==0)break;
ans+=b-1;
d++;
// cout<<b<<" ";


}
}
else{
     break;
}


}
cout<<x<<" "<<ans<<endl;


}



return 0;
}







     










