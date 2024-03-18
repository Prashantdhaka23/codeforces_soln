#include<bits/stdc++.h>
using namespace std;
# define ll long long 
# define py cout<<"Yes"<<endl;
# define pn cout<<"No"<<endl;
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}
// map<int,int> mp;
// std::map<int,int>::iterator it;
// for( it=mp.begin();it!= mp.end();it++){

// }
 
 int main(){

ll t;
cin>>t;
while(t--){
ll a,b,n,m,ans=-1;
cin>>n;
vector<int> v(n,0);
int j=0;
map<int,int> mp;

for(int i=0;i<n;i++){
    cin>>v[i];
    mp[v[i]]++;

}
int k=0;
std::map<int,int>::iterator it;
for( it=mp.begin();it!= mp.end();it++){
     k+=it->second;
     if(n-k>=k && n-k<=k-it->second){
          ans=n-k;
          break;
     }

}
cout<<ans<<endl;



}






return 0;
}







     








