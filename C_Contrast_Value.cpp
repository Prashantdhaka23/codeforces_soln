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
cin>>n;
// string s;
// cin>>s;
vector<int> v(n,0);
for(int i=0;i<n;i++)cin>>v[i];

int l=v[0];
int ans=n;
for(int i=1;i<n-1;i++){

ll x=abs(v[i]-l);
ll y=abs(v[i]-v[i+1]);
ll z=abs(l-v[i+1]);

if(x+y==z){
     ans--;

}else{
     l=v[i];
}

}

if(ans==2){
     if(v[n-1]-l==0){
          ans--;
     }
}
cout<<ans<<endl;
for(auto it : v){
     cout<<it<<endl;
}




















}
return 0;
}





     









