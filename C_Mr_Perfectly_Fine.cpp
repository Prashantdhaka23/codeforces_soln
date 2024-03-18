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
int a,b,n,m=INT_MAX,ans=INT_MAX;
cin>>n;

int f=0;
 a=INT_MAX;
 b=INT_MAX;

for(int i=0;i<n;i++){
   int k;
   cin>>k;
   string s;
   cin>>s;
   if(s=="11"){
     ans=min(ans,k);
     

   }
   if(s[0]=='1'){
a=min(a,k);
   }
    if(s[1]=='1'){
b=min(b,k);
   }
}
if(a!=INT_MAX && b!=INT_MAX)ans=min(ans,a+b);
if(ans==INT_MAX){
     cout<<-1<<endl;
}
else 
cout<<ans<<endl;














}






return 0;
}







     







