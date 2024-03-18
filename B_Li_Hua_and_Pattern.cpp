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
cin>>n >> m;
int arr[n][n];
for(int i=0;i<n;i++){
     for(int j=0;j<n;j++){
int k;
cin>>k;
arr[i][j]=k;

     }
}
int l=0;

for(int i=0;i<n;i++){
     for(int j=0;j<n;j++){

if(arr[i][j]!=arr[n-i-1][n-j-1])l++;;

     }
}
// cout<<l<<endl;
l=l/2;
if(l<=m && (((m-l)%2==0) || n%2==1 ))cout<<"YES"<<endl;
else cout<<"NO"<<endl;



}
return 0;
}





     









