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
     // map<int,int> mp;
int n=0,x=0,y=0,a=0,b=0,c,d,e,fl=1;
ll mi=INT_MAX;
ll ma=INT_MIN;
cin>>n;
string s;
cin>>s;
ll ans=0;
// fo(i,n){
//      ll k;
//      cin>>k;
//      v.push_back(k);
// }
for(int i=0;i<n;i++){
vector<int> cr(10);
int df=0;
for(int j=i;j< min((i+228),n);j++){
int k=s[j]-'0';
if(cr[k]==0){
     df++;
}
cr[k]++;
if(*max_element(cr.begin(),cr.end())<=df){
     ans++;
}
}
}
cout<<ans<<endl;
}

}