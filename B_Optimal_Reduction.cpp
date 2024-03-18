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
     vector<int> v;
     // map<int,int> mp;
ll n=0,x=0,y=0,a=0,b=0,c=0,d=0,e,fl=1;
ll mi=INT_MAX;
ll ma=INT_MIN;
cin>>n;
fo(i,n){
     ll k;
     cin>>k;
     v.push_back(k);
}
c=*min_element(v.begin(),v.end());
for(int i=1;i<n-1;i++){

     if(v[i]>v[i+1] && v[i]>v[i-1])x++;
     

}
if(x>1)cout<<"NO"<<endl;
else cout<<"YES"<<endl;


}

}