#include<bits/stdc++.h>
using namespace std;
# define ll long long 
# define py cout<<"YES"<<endl;
# define pn cout<<"NO"<<endl;
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}
// map<int,int> mp;
// std::map<int,int>::iterator it;
// for( it=mp.begin();it!= mp.end();it++){

// }


 int main(){

ll t=1;
cin>>t;
while(t--){
ll n,m,r;
cin>>n;
vector<int> v(n,0);
vector<ll> p(n,0);
map<ll,int> mp;

ll ans=0;
for(int i=0;i<n;i++)cin>>v[i];
p[n-1]=v[n-1];
mp[v[n-1]]=1;
int j=2;
for(int i=n-2;i>=0;i--){
     p[i]=v[i]+p[i+1];
     mp[p[i]]=j;
     j++;
}
ll sum=0;
for(ll i=0;i<n;i++){
sum+=v[i];

if(mp.find(sum)!=mp.end()){
  if(n-mp[sum]>i) ans=max(ans,i+mp[sum]+1);
}

}

cout<<ans<<endl;

}





     
 }






 

 
 




