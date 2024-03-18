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
bool isPrime(int n)
{
    // Corner cases
    if (n <= 1)
        return false;
  //suppose n=7 that is prime and its pair are (1,7)
  //so if a no. is prime then it can be check by numbers smaller than square root
  // of the n
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}
int dp[1005][12002];

long long ok(vector<long long > & coin ,vector<int> & val ,int k,int i){

if(i>=val.size()){
return 0;

}
if(dp[i][k]!=-1)return dp[i][k] ;
long long  ans=0;

if(k>=val[i]){
     ans=max(coin[i]+ok(coin,val,k-val[i],i+1),ok(coin,val,k,i+1));

}
else{

ans=ok(coin,val,k,i+1);

}

return dp[i][k]=ans;



}











int main(){
ll t;
cin>>t;
while(t--){
int  n,k;
cin>>n>>k;
// cin>>m;
// string s;

vector<int> val(1005,0);
vector<long long > coin(1005,0);
vector<int> temp(1005,0);
const int N = 1005;


  vector<int> d(N, N);
  d[1] = 0;
  for (int i = 1; i < N; ++i) {
    for (int x = 1; x <= i; ++x) {
      int j = i + i / x;
      if (j < N) d[j] = min(d[j], d[i] + 1);
    }
  }


int l=0;


for(int i=0;i<1005;i++){
temp[i]=d[i];


}



for(int i=0;i<n;i++){
     cin>>val[i];
    val[i]=temp[val[i]];

}

k=min(12002,k);
for(int i=0;i<n;i++){
     cin>>coin[i];
     // coin[i]=log2(coin[i]-1);
}
memset(dp,-1,sizeof(dp));
cout<<ok(coin,val,k,0)<<endl;


}
return 0;
}