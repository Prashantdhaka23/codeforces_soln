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
// cin>>t;
while(t--){
ll a,b,s,n,m,ans=0;
cin>>n>>s;
int dp[n][s];
memset(dp,0,sizeof(dp));
dp[0][0]=1;


for(int i=1;i<=n;i++){
     for(int k=0;k<1000;k++){
     for(int j=0;j<10;j++){
       if(i==n && j==0){

       }  else  dp[i][s]=dp[i-1][s-j];
     }
     }
}













}






return 0;
}







     









