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

ll t;
cin>>t;
while(t--){
int a,b,n,m=INT_MAX,ans=0;
cin>>n;

int f=0;
for(int i=0;i<n;i++){
   int k;
   cin>>k;
   if(k==1){
     f=0;
   }else{
     f++;
   }
   ans=max(ans,f);
}
cout<<ans<<endl;














}






return 0;
}







     







