
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
int n ;
cin>>n;
map<string,int> mp;

string s;
cin>>s;
string k="";
int ans=1;


for(int i=2;i<n;i++){
if(s[i]!=s[i-2]){
     ans++;

}

}
cout<<ans<<endl;







}
return 0;
}







     










