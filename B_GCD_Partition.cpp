#include<bits/stdc++.h>
using namespace std;
# define ll long long 

ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}
    

 int main(){
ll t;
cin>>t;
while(t--){
long long  n,m=0;
ll ans=0;
//  long long  m=1e9+7;
cin>>n;

vector<ll> mp;

vector<int> v(n,0);
for(int i=0;i<n;i++){
cin>>v[i];
ans+=v[i];
mp.push_back(ans);


}
ll f=1;

for(int k=0;k<n-1;k++){
f=max(f,gcd(ans-mp[k],mp[k]));

}
cout<<f<<endl;


}





     







}

