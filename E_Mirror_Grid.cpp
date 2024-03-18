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
vector<vector<int> > v(n,vector<int>(n,0));
vector<vector<int> > v2(n,vector<int>(n,0));


for(int i=0;i<n;i++){
     string c;
cin>>c;

for(int j=0;j<n;j++){

if(c[j]=='1'){
     v[i][j]=1;
}


}}
ll ans=0;

for(int i=0;i<(n+1)/2;i++){
     for(int j=0;j<(n)/2;j++){

int x=0;

if(i==j){
     x+=v[i][j];
x+=v[i][n-j-1];
x+=v[n-i-1][j];
x+=v[n-i-1][n-j-1];
}
else{
     x+=v[i][j];
x+=v[j][i];
x+=v[n-i-1][n-j-1];
x+=v[n-j-1][n-i-1];
}

ans+=min(x,4-x);

     }

}




cout<<ans<<endl;












 }
 }

     







 

 
 




