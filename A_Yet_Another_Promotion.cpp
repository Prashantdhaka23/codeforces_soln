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
ll a,b,n,m,ans=0;
cin>>a>>b>>n>>m;

if(a*m<b*(m+1)){
int x=n/(m+1);
ans+=x*a*m;
int z=n%(m+1);
ans+=min(z*a,z*b);



}else{

ans+=n*b;


}
cout<<ans<<endl;




}






return 0;
}







     









