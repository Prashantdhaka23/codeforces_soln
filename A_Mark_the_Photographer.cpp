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

ll t=1;
cin>>t;
while(t--){
int n ,m;
cin>>n>>m;
vector<int> v(2*n,0);
for(int i=0;i<2*n;i++)cin>>v[i];
sort(v.begin(),v.end());
int f=0;
for(int i=0;i<n;i++){
     
if(v[n+i]-v[i]<m){
     f=1;

     break;
}

     
}
if(f)cout<<"NO"<<endl;
else cout<<"YES"<<endl;


}






return 0;
}







     









