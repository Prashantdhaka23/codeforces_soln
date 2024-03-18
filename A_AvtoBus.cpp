
#include<bits/stdc++.h>
using namespace std;
# define ll long long 
 
 
 
 
 int main(){
 
 
 
 
int t;
cin>>t;
while(t--){
  
ll n;
int ans=0;
 
cin>>n;
if(n%2!=0 || n<=3){
     cout<<-1<<endl;
}
else{
ll a=(n)/6LL;
ll b=(n)/4LL;
ll c=n-6LL*a;
ll d=n-4LL*b;
 
ll x=c/4LL;
ll y=d/6LL;
if(c%4!=0 ){
     cout<<-1<<endl;
}
else{
     cout<<x+a<<" "<<b<<endl;
}
 
 
 
 
 
}
 
 
 
 
 
 
 
}
 
 
// cout<<ans<<endl;
 
 
 
return 0;
 
}
 
 
 
 
 
     
 
 
 
 
 
 
 
 
 
