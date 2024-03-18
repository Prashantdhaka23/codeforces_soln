#include<bits/stdc++.h>
using namespace std;
# define ll long long 
# define  fo(i,n) for(ll i=0;i<n;i++)
#include<unordered_map>
ll gcd(ll a, ll b)
{
    ll result = min(a, b); // Find Minimum of a nd b
    while (result > 0) {
    if (a % result == 0 && b % result == 0) {
    break;
    }
    result--;
    }
    return result; // return gcd of a nd b
}
 int main(){
ll t=1;
cin>>t;
while(t--){
     // vector<int> v;
     // map<int,int> mp;
ll n=0,x,y,a=0,b=0,d,e,fl=0;
ll mi=INT_MAX;
ll ma=INT_MIN;



cin>>x>>y;
vector<vector<ll> > arr(x,vector<ll> (y,0));
// fo(i,n){
//      ll k;
//      v.push_back(k);
// }

ll sum=0;
for(int i=0;i<x;i++){
string s;
cin>>s;
vector<ll> m;
for(int j=0;j<y;j++){
     b=s[j]-'0';
arr[i][j]=(b);
if(s[j]=='1')
sum++;}
arr[i]=(m);

}

for(int i=0;i<x-1;i++){
for(int j=0;j<y-1;j++){
 ll c=arr[i][j]+arr[i+1][j]+arr[i][j+1]+arr[i+1][j+1];
   mi=min(mi,c);  
}}

if(sum==0)cout<<sum<<endl;
else if(mi==4){
cout<<sum-2<<endl;
}else if(mi==3){
cout<<sum-1<<endl;
}
else{
     cout<<sum<<endl;
}
}
}