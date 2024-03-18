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
long long a,b,c,d;
 cin>>n>>a>>b>>c>>d;

ll x=c-1;
ll y=d-1;

 x = min(x, n-x-1);
  y = min(y, n-y-1);
  ll l=min(x,y);

  int x1 = min(a-1,n-(a-1)-1);
    int y1 = min(b-1 ,n-(b-1)-1);
    int e = min(x1,y1);



  cout<<abs(e - l)<<"\n";









}
return 0;
}





     









