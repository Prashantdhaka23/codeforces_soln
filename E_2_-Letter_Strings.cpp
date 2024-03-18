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
// vector<vector<int> > v(n,vector<int>(n,0));
// vector<vector<int> > v2(n,vector<int>(n,0));
vector<vector<int> > v1(11,vector<int>(11,0));
vector<vector<int> > v2(11,vector<int>(11,0));
ll ans=0;
for(int i=0;i<n;i++){
string a;
cin>>a;
v1[a[0]-'a'][a[1]-'a']++;
v2[a[1]-'a'][a[0]-'a']++;

for(int j=0;j<v1[a[0]-'a'].size();j++){
     if(j!=a[1]-'a')ans+=(v1[a[0]-'a'][j]);
}
for(int j=0;j<v2[a[1]-'a'].size();j++){
     if(j!=a[0]-'a')ans+=(v2[a[1]-'a'][j]);
}



}
cout<<ans<<endl;




     }

}





     







 

 
 




