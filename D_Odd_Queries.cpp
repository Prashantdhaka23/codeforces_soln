
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
ll n ,m,c;
cin>>n>>m;
vector<int> v(n+1,0);
for(int i=1;i<=n;i++){cin>>v[i];

}
// if(n+m==c)cout<<"+"<<endl;
// else cout<<"-"<<endl;
for(int i=1;i<=n;i++){
v[i]+=v[i-1];
}
while(m--){
int a,b,c;
cin>>a>>b>>c;

int x=v[b]-v[a-1];

int y=c*(b-a+1);
int d=abs(x-y);
// cout<<x<<" "<<y<<" "<<d<<" ";
// cout<<endl;

if(v[n]%2==0){
if(d%2==1)py
else pn


}else{
if(d%2==0)py
else pn

}


}








}
return 0;
}







     










