#include<bits/stdc++.h>
using namespace std;
# define ll long long 
# define py cout<<"YES"<<endl;
# define pn cout<<"NO"<<endl;
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}
// map<int,int> mp;
// std::map<int,int>::iterator it;
// for( it=mp.begin();it!= mp.end();it++){

// }


 int main(){

ll t=1;
cin>>t;
while(t--){
int n,m=0,r;
cin>>n;
ll v[n];
map<ll,int> mp;
ll x=INT_MIN;
for(int i=0;i<n;i++){
     cin>>v[i];
     mp[v[i]]++;
     x=max(x,v[i]);
}
if(mp[x]%2==0){
cout<<"Zenyk"<<endl;
}else{
cout<<"Marichka"<<endl;

}


     }

}





     







 

 
 




