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
int n;
cin>>n;
int v[n];

for(int i=0;i<n;i++){
     cin>>v[i];
}
sort(v,v+n);
ll ans=1e9+7;
for(int i=0;i<n-2;i++){
    for(int j=i+1;j<n-1;j++){
        for(int k=j+1;k<n;k++){
            ans=min(ans,abs(v[i]+v[k]-2LL*v[j]));
            
        }
    }
}


cout<<ans<<endl;


}


     }







     







 

 
 




