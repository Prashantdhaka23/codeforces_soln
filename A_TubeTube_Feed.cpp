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
cin>>t;
while(t--){
ll n,a=-1,m,b;

cin>>n >> m;
// cin>>n;
// string s;
// cin>>s;
vector<int> v(n,0);
vector<int> v1(n,0);

// map<char,int> mp;
// map<char,int> mpp;
// int ma=INT_MAX;
int mi=INT_MIN;
for(int i=0;i<n;i++){
    cin>>v[i];
}
for(int i=0;i<n;i++){
    cin>>v1[i];
}

for(int i=0;i<n;i++){
   if(i+v[i]<=m){
     if(mi<=v1[i]){
a=i+1;
mi=v1[i];
     }
   }
}
cout<<a<<endl;















// if(x>1)ans=max(ans,x*(x-1));
// else if(x==1)ans=max(ans,1LL);













}
return 0;
}





     









