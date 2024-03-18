#include<bits/stdc++.h>
using namespace std;
# define ll long long 
# define  fo(i,n) for(ll i=0;i<n;i++)
#include<unordered_map>

 int main(){
ll t;
cin>>t;
while(t--){
     // vector<int> v;
     // unordered_map<int,int> mp;
ll n,x,y,a,b,c,d,e,fl=1;
cin>>x>>y;
// fo(i,n){
//      ll k;
//      cin>>k;
//      v.push_back(k);
// }
a=min(x,y);
b=max(x,y);
if(a==1 && b==1)cout<<0<<endl;
else if(a==1 && b>1)cout<<b<<endl;
else
cout<<2*(a-1)+b<<endl;



}



}