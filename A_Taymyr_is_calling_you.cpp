#include<bits/stdc++.h>
using namespace std;
# define ll long long 
# define py cout<<"YES"<<endl;
# define pn cout<<"N"<<endl;
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}
// map<int,int> mp;
// std::map<int,int>::iterator it;
// for( it=mp.begin();it!= mp.end();it++){

// }


 int main(){

ll t=1;
// cin>>t;
while(t--){
ll n,m,r;
cin>>n>>m>>r;

ll k=(n*m)/gcd(n,m);

cout<<r/k<<endl;












}




 }

     







 

 
 




