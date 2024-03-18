
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
vector<ll> v(n+1,0);
for(int i=1;i<=n;i++){
     cin>>v[i];
     // v[i]+=v[i-1]
}
for(int i=1;i<=n;i++){
     // cin>>v[i];
     v[i]+=v[i-1];
     // cout<<v[i]<<" ";

}
ll ans=0;
ll l=1;
int h=n;
while(l<=h){
int mid=(l+h)/2;

cout<<"?"<<" "<<mid<<" ";
for(int i=1;i<=mid;i++){
cout<<i<<" ";

}

cout<<endl;
// cout<<flush;

int x;
cin>>x;

 if( v[mid]<x){
     
     ans=mid;
     h=mid-1;
}
else if(v[mid]==x){
l=mid+1;

}



}
cout<<"!"<<" "<<l<<endl;
cout<<endl;









}
return 0;
}







     










