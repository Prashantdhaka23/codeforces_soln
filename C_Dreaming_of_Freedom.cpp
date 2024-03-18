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
int a,b,n,m=INT_MAX,ans=1;
cin>>n>>a;

if(a>n ){

ans=-1;
}else if
else{

if(n%a==0){
     ans=-1;
}
for(int i=2;i<=n && i<=10000 && i<=a;i++){
     if(n%i==0){
          ans=-1;
          break;
     }
}
}
if(ans==-1  )cout<<"NO"<<endl;
else cout<<"YES"<<endl;












}






return 0;
}







     







