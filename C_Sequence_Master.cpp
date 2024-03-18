
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
ll n ;
cin>>n;
vector<ll> v(2LL*n,0);

vector<ll> v2(2*n,-1);
if(n%2==0)v2[0]=n;
else v2[0]=n-2;

for(int i=0;i<2*n;i++){
     cin>>v[i];
     
     }

sort(v.begin(),v.end());
sort(v2.begin(),v2.end());
ll a=0,b=0,x=0;
ll ans=LLONG_MAX;

for(int i=0;i<2*n;i++){
a+=abs(v[i]);
x+=v[i];
b+=abs(v2[i]-v[i]);
}
ans=min(ans,a);
if(n%2==0)ans=min(ans,b);

if(n==1){
// ans=LLONG_MAX;

     ans=min(ans,abs(v[0]-v[1]));
     // ans=min(ans,abs(v[0])+abs(v[1]));

}else if(n==2){
     // ans=LLONG_MAX;
ll l=0,g=0;
      for(int i=0;i<4;i++){
g+=abs(v[i]-2);
// l+=abs(v[i]+2);


      }
     //  ans=min(ans,l);
ans=min(ans,g);
ans=min(ans,a);


}
cout<<ans<<endl;











}
return 0;
}







     










