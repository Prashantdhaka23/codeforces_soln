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
#define lb lower_bound
#define ub upper_bound
#define fo(i,a,b) for(int i=a;i<b;i++)
#define all(v) (v).begin(),(v).end()

long long mod=1e9+7;
ll pwr(ll a, ll b) { ll res = 1; a=a%mod; while (b > 0) {if (b & 1) res = res * a ; a = a * a ;a=a%mod; res=res%mod; b >>= 1;} return res;}

int main(){
ll t;
cin>>t;
while(t--){
long long  n,m=0;
// cin>>n;
cin>>n>>m;
// string s;
// cin>>s;
// vector<int> v(n,0);
// int a=1;
// for(int i=0;i<n;i++){
//      cin>>v[i];
// }
int f=-1;
if(n*(n-1)/2==m){
     f=n;
}
for(int i=1;i<=n;i++){
if(f!=-1)break;
     if(i*(i-1)/2+((n-i)*(n-i-1)/2)==m){
f=i;
break;
     }
}


if(f!=-1){
     cout<<"YES"<<endl;
     for(int i=0;i<f;i++){
          cout<<1<<" ";
     }
     for(int i=0;i<n-f;i++){
          cout<<-1<<" ";
     }
     cout<<endl;
}
else{
     cout<<"NO"<<endl;
}





}
return 0;
}





     









