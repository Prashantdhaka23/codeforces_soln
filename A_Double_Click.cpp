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
ll t=1;
// cin>>t;
while(t--){
long long  n,m=0;
cin>>n >> m;
vector<int> v(n,0);

for(int i=0;i<n;i++){
//  int k;
 cin>>v[i];  
}
int f=1;
for(int i=0;i<n-1;i++){
//  int k;
if(v[i+1]-v[i]<=m){
     cout<<v[i+1]<<endl;
     f=0;
     break;
} 
}
if(f){
     cout<<-1<<endl;
}




}
return 0;
}





     









