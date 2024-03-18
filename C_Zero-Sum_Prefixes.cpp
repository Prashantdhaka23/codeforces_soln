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
     vector<ll> v;
ll n=0,x=0,y=0,a=0,b=0,c,d,e,fl=1;
ll mi=INT_MAX;
ll ma=INT_MIN;
cin>>n;
fo(i,n){
     ll k;
     cin>>k;
     v.push_back(k);
}
ll ans=0;
ll j=0;
while(j<n && v[j]!=0){
x+=v[j];
j++;
if(x==0)ans++;}

while(j<n){

ll sum=0;
     map<ll,ll> mp;
     mp[0]++;
ma=0;
j++;
while( j<n && v[j]!=0 ){
     sum=sum+v[j];

     mp[sum]++;
   ma=max(ma,mp[sum]);
   j++;

}


ans+=max(ma,1LL);

mp.clear();

}

cout<<ans<<endl;
}

}