#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>


using namespace std;
# define ll long long 
# define  fo(i,n) for(ll i=0;i<n;i++)
#include<map>
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
     map<int,int> mp;
ll n=0;
ll mi=INT_MAX;
ll ma=INT_MIN;

string s;
cin>>s;
fo(i,n){
     ll k;
     cin>>k;
     v.push_back(k);
}
for(auto it :v ){
cout<<it<<endl;
}
long long  i=0,j=0;
while(i<s.size() && j<s.size()){
if(s[i]==p[j]){
    j++;

}}

sort(s.begin(),s.end());

cout<<s<<endl;




}}