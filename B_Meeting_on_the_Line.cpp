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
     vector<ll> v,ar;
     // map<int,int> mp;
ll n=0,x=0,y=0,c,d,e,fl=1;
double a=0.0,b=0.0;
ll mi=LONG_MAX;
ll ma=LONG_MIN;
cin>>n;
fo(i,n){
     ll k;
     cin>>k;
     v.push_back(k);
}fo(i,n){
     ll k;
     cin>>k;
     ar.push_back(k);
}
fo(i,n){
     if(mi<(v[i]-ar[i]))a=v[i];
     if(ma>(v[i]+ar[i]))b=v[i];

mi=min(mi,v[i]-ar[i]);
ma=max(ma,v[i]+ar[i]);



}
double ans=(double)(mi+ma)/2.0;


cout<<fixed<<setprecision(6)<<ans<<endl;
}

}

