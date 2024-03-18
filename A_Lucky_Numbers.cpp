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
int n,x,ans=-1;
cin>>n>>x;

int y=10;
int res=n;

for(int i=n;i<=min(n+20,x);i++){
     string m=to_string(i);
     int x=0;
     int y=10;
for(int i=0;i<m.size();i++){
     x=max(x,m[i]-'0');
     y=min(y,m[i]-'0');
}

if(ans<x-y){
     res=i;
     ans=x-y;
}
if(ans==0)break;

}


cout<<res<<endl;



}
return 0;

}





     









