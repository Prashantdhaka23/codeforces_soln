#include<bits/stdc++.h>
using namespace std;
# define ll long long 
# define  fo(i,n) for(ll i=0;i<n;i++)
#include<unordered_map>

 int main(){
ll t=1;
// cin>>t;
while(t--){
     // vector<int> v;
     // unordered_map<int,int> mp;
ll n,x,y,a,b,c,d,e,fl=1;
// cin>>n;
string s;
cin>>s;
// fo(i,n){
//      ll k;
//      cin>>k;
//      v.push_back(k);
// }
int ans=-1;
for(int i=1;i<=s.size()+1;i++){
if(s[i-1]=='a')ans=i;


}
cout<<ans<<endl;



}



}