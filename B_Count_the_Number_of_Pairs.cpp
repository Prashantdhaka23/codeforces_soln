
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
ll n ,m;
cin>>n>>m;
// vector<int> v(n,0);
// for(int i=0;i<n;i++)cin>>v[i];
string s,k;
cin>>s;
int ans=0;
vector<int> v1(26,0);
vector<int> v2(26,0);

for(int i=0;i<n;i++){

int x=s[i]-'a';
int y=s[i]-'A';
if(x>=0 && x<26)v1[x]++;
if(y>=0 && y<26)v2[y]++;



}
int d=0;
for(int i=0;i<26;i++){
ans+=min(v1[i],v2[i]);
d+=abs(v1[i]-v2[i]);
int f=abs(v1[i]-v2[i])/2;
if(f<=m){
     ans+=f;
     m-=f;
}
else if(m<=f){
     ans+=m;
     m=0;
}

}

cout<<ans<<endl;





}
return 0;
}







     










