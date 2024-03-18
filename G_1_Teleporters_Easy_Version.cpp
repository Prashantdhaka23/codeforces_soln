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
     map<int,int> mp;
     for(int i=0;i<10002;i++){
          
     }

ll t=1;
cin>>t;
while(t--){
int n,m=0,r;
cin>>n>>m;
vector<ll> v(n,0);

for(int i=0;i<n;i++){
cin>>v[i];
v[i]+=i+1;
}
sort(v.begin(),v.end());

ll sum=0;
int ans=0;
for(int i=0;i<n;i++){
     sum+=v[i];
     if(sum>m){
          break;
     }
     ans++;
}

cout<<ans<<endl;




}





     }







     







 

 
 




