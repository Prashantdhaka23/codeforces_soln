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
ll n=0;
ll mi=INT_MAX;
ll ma=INT_MIN;
cin>>n;
fo(i,n){
     ll k;
     cin>>k;
     v.push_back(k);
}
if(n%2!=0){
     cout<<-1<<endl;
}else{
vector<pair<int,int> > vp;
for(int i=0;i<n;i+=2){
if((v[i]==1 && v[i+1]==1) || (v[i]<0 && v[i+1]<0)){
     pair<int,int> x3=make_pair(i+1,i+2);
     

vp.push_back(x3);

}else{
     pair<int,int> x1=make_pair(i,i);
     pair<int,int> x2;

     x1=make_pair(i+1,i+1);
     x2=make_pair(i+2,i+2);

     vp.push_back( x1);
     vp.push_back( x2);
}



}
cout<<vp.size()<<endl;
for(int i=0;i<vp.size();i++){
     cout<<vp[i].first<<" "<<vp[i].second<<endl;
}

}





}

}