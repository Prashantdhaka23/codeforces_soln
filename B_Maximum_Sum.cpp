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
#define pb push_back
#define ppb pop_back
#define mp make_pair

long long mod=1e9+7;
ll pwr(ll a, ll b) { ll res = 1; a=a%mod; while (b > 0) {if (b & 1) res = res * a ; a = a * a ;a=a%mod; res=res%mod; b >>= 1;} return res;}

int main(){
ll t=1;
cin>>t;
while(t--){
long long  n,m=0,a,b;
// cin>>n;
cin>>n >> m;
// string s;
// cin>>s;
vector<int> v(n,0);
for(int i=0;i<n;i++)cin>>v[i];

sort(all(v));
vector<ll> v1(n,0);
v1[0]=v[0];
for(int i=1;i<n;i++){
v1[i]=v[i]+v1[i-1];
}

int j=n-m-1;
ll i=0;
ll sum=v1[j];

for(;j<n;){

ll x=v1[j];
if(i>0)x-=v1[i-1];
sum=max(sum,x);
j++;
i+=2;

}


cout<<sum<<endl;


















}
return 0;
}





     









