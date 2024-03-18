
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
ll n ,m,c;
cin>>n;
vector<ll> v(n,0);
for(int i=0;i<n;i++){
     
     cin>>v[i];

}
// if(n+m==c)cout<<"+"<<endl;
// else cout<<"-"<<endl;
sort(v.begin(),v.end());
ll x=1;
ll f=1;
if(v[0]!=1)f=0;
for(int i=1;i<n;i++){
if(v[i]>x){
     f=0;
     break;
}
x+=v[i];

}
if(f)py
else pn






}
return 0;
}







     










