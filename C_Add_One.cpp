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
string n;
cin>>n;
int m;
int c=1e9+7;
cin>>m;
vector<ll> dp(10,0);
for(int i=0;i<n.size();i++){
     int x=n[i]-'0';
dp[x]++;
}
while(m--){
     vector<ll> v(10,0);
     for(int i=1;i<=9;i++){
          v[i]=dp[i-1]%c;
     }
     v[0]+=dp[9]%c;
     v[1]+=dp[9]%c;
     dp=v;

}

ll ans=0;
for(int i=0;i<10;i++){
     ans+=dp[i]%c;
}
cout<<ans<<endl;



}






return 0;
}







     









