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
ll n,ans=0;
cin>>n;
vector<int> v(n,0);
map<int,int> mp;
mp.clear();
ans=-1;
int f=1;
for(int i=0;i<n;i++){
     int l;
     cin>>v[i];
     if(mp.find(v[i])!=mp.end() ){
  ans=max(ans,mp[v[i]]+n-i);

     }
     mp[v[i]]=i;
}


cout<<ans<<endl;


}

return 0;
}







     









