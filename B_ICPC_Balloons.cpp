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
ll n,m,r;
cin>>n;
string s;
cin>>s;
int ans=0;
map<char,int> mp;
for(int i=0;i<n;i++){
     if(mp[s[i]]==0)ans+=2;
     else ans++;
     mp[s[i]]++;
}
cout<<ans<<endl;












}




 }

     







 

 
 




