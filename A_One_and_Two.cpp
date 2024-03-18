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
ll n,m,ans=0;
cin>>n;
string s;
vector<ll> v(n,0);
vector<ll> v1(n,0);
for(int i=0;i<n;i++){
cin>>v[i];
if(v[i]==2)ans++;
}

if(ans%2==1){
     cout<<-1<<endl;
}else{
int x=ans/2;
int y=0;
for(int i=0;i<n;i++){
     if(v[i]==2)y++;
     if(y==x){
          ans=i+1;
          break;
     }
}
     cout<<ans<<endl;



}





}
return 0;

}





     









