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
ll n,m,ans=0;
cin>>n>>m;
map<int,vector<int> > mp;

while(n>0){
for(int i=0;i<m;i++){
int k;
cin>>k;
mp[i].push_back(k);

}
n--;


}

for(auto it : mp){
ll sum=0;
ll j=0;
sort(it.second.begin(),it.second.end());

for(auto i: it.second){

ans+=j*i-sum;
j++;
sum+=i;

}


}

cout<<ans<<endl;



}
return 0;

}





     









