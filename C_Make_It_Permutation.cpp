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

long long mod=1e9+7;
ll pwr(ll a, ll b) { ll res = 1; a=a%mod; while (b > 0) {if (b & 1) res = res * a ; a = a * a ;a=a%mod; res=res%mod; b >>= 1;} return res;}

int main(){
ll t;
cin>>t;
while(t--){
long long  n,c,d;
cin>>n>>c>>d;
// cin>>m;
// string s;
// cin>>s;
// int c=50001;
set<int> s;
unordered_map<int,int> mp;

ll j=0;
for(int i=0;i<n;i++){
int k;
cin>>k;

s.insert(k);

     j++;

mp[k]++;

}

int i=1;
ll ans=n*c+d;
ll g=0;

ll f=s.size();
ll prev=0;
// ans=f*c;
ll l=0;
for(auto it : s){

ll x=it;
     f--;
l+=(x-prev-1);
j--;
// if(f==s.size()-1)j+=mp[x]-1;

ans=min(ans,l*d + j*c);
// ans=min(ans,l*d+ c*f +);
// if(f==s.size()-1)j-=mp[x]-1;


prev=x;

// cout<<ans<<" ";


}
cout<<ans<<endl;



}
return 0;
}