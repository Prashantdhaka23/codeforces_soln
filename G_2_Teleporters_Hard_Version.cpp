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
     map<int,int> mp;
     for(int i=0;i<10002;i++){
          
     }

ll t=1;
cin>>t;
while(t--){
int n,m=0,r;
cin>>n>>m;
vector<ll> v(n,0);
vector<pair<ll,ll> > p;
vector<ll> l;


ll mi=INT_MAX;
ll d=0;
int j=-1;
for(int i=0;i<n;i++){
cin>>v[i];
if(mi>v[i]+i+1  ){
     j=i;
mi=min(mi,v[i]+i+1);
d=v[i]+n-i;


}
else if(mi==v[i]+i+1 && d<v[i]+n-i){
     j=i;
mi=min(mi,v[i]+i+1);
d=v[i]+n-i;

}

}
for(int i=0;i<n;i++){
l.push_back(v[i]+i+1);

v[i]=min(v[i]+n-i,v[i]+i+1);
     p.push_back(make_pair(v[i],i));


}
int ans=0;
ll sum=0;




sort(p.begin(),p.end());

for(int i=0;i<p.size();i++){
     sum+=l[p[i].second];
     if(sum<=m){
          ans=max(ans,i+1);
     }
     sum-=l[p[i].second];
    
     sum+=p[i].first;
     // cout<<p[i]<<" ";
    
}

// cout<<j<<endl;


cout<<ans<<endl;




}





     }







     







 

 
 




