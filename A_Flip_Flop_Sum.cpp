#include<bits/stdc++.h>
using namespace std;
# define ll long long 
// # define py cout<<"YES"<<endl;
// # define pn cout<<"N"<<endl;
// ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}
// // map<int,int> mp;
// // std::map<int,int>::iterator it;
// // for( it=mp.begin();it!= mp.end();it++){

// // }


 int main(){

ll t;
cin>>t;
while(t--){
ll n,m,r;
cin>>n;




vector<ll> a(n,0);
int f=0;
int l=1;
// vector<ll> v1(n,0);
if(a[n-1]==-1)f=1;

for(int i=0;i<n;i++)cin>>a[i];
for(int i=0;i<n;i++){
if(a[i]==-1 &&  a[i+1]==-1){
     f=2;
     break;
}
 if(a[i]==-1){

     f=1;
   
     
}

}
ll ans=0;
for(int i=0;i<n;i++){
ans+=a[i];

}

 if(f==2)cout<<ans+4<<endl;
else if(f==1)cout<<ans<<endl;

else cout<<ans-4<<endl;
 








}




 }

     









