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
cin>>n;
// cin>>m;
// string s;
// cin>>s;
vector<int> v(n-1,0);
vector<int> v2(n,0);

int a=0;
for(int i=0;i<n-1;i++){
     cin>>v[i];
}
v2[0]=v[0];
v2[n-1]=v[n-2];
int f=1;
cout<<v2[0]<<" ";
for(int i=0;i<n-2;i++){
v2[i+1]=min(v[i],v[i+1]);
cout<<v2[i+1]<<" ";


}
cout<<v2[n-1]<<" ";
cout<<endl;




}
return 0;
}





     










