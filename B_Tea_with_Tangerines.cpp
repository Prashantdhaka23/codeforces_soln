#include<bits/stdc++.h>
using namespace std;
# define ll long long 
# define  fo(i,n) for(ll i=0;i<n;i++)
#include<unordered_map>

 int main(){
ll t;
cin>>t;
while(t--){
     vector<int> v;
     // unordered_map<int,int> mp;
ll n,x,y=0,a,b,c,d,e,fl=1;
cin>>n;
fo(i,n){
     ll k;
     cin>>k;
     v.push_back(k);
     y+=k;
}
sort(v.begin(),v.end());
int ans=0;
 x=v[0];
 if(x!=1){
for(int i=1;i<n;i++){
   v[i]=ceil(v[i]/x);
while(v[i]>=1){
     ans++;
     v[i]=ceil(v[i]/x);
}


}

cout<<ans<<endl;
}
else{
     cout<<y-n<<endl;
}



}



}