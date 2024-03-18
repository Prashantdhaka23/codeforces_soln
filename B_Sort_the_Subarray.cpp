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
long long  n,m=0,a,b;
// cin>>n >> m;
cin>>n;
// string s;
// cin>>s;
vector<int> v(n,0);
vector<int> c(n,0);
for(int i=0;i<n;i++){
     cin>>v[i];
}
for(int i=0;i<n;i++){
     cin>>c[i];
}
int l=0;
int r=n-1;
for(int i=0;i<n;i++){
     if(v[i]==c[i]){
          l++;
     }else{
          break;
     }
}
for(int i=n-1;i>=0;i--){
     if(v[i]==c[i]){
          r--;
     }else{
          break;
     }
}

// map<char,int> mp;
if(l==n){
     l--;
}


ll x=c[l];
for(int i=l-1;i>=0;i--){
     if(v[i]<=x){
        x=v[i];
        l--;
     }else{
          break;
     }
}
if(r==-1){
     r++;
}
x=c[r];
for(int i=r+1;i<n;i++){
     if(v[i]>=x){
        x=v[i];
        r++;
     }
     else{
          break;
     }
}
if(r==n){
     r--;
}
if(l==-1){
     l++;
}
cout<<l+1<<" "<<r+1<<endl;







// if(x>1)ans=max(ans,x*(x-1));
// else if(x==1)ans=max(ans,1LL);













}
return 0;
}





     









