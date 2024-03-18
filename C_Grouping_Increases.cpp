


#include<bits/stdc++.h>
using namespace std;


#define prashant ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)


#define endl                                "\n"
#define int                                 long long    //in case of mle ,tle high constraints
#define ll                                  long long
#define umap                                unordered_map
#define uset                                unordered_set
#define lb                                  lower_bound
#define ub                                  upper_bound

const ll mod = 998244353;
const int N=2e5+5;
 

ll pwr(ll a, ll b) {a %= mod; ll res = 1; while (b > 0) {if (b & 1) res = res * a % mod; a = a * a % mod; b >>= 1;} return res;}

ll pwrl(ll a, ll b) { ll res = 1; while (b > 0) {if (b & 1) res = res * a ; a = a * a ; b >>= 1;} return res;}


int32_t main(){

int t=1;
cin>>t;
while(t--){
  int n,k;
	    cin>>n>>k;
	    int ans=1;
	    ans=ans*pwr(2LL,n-1);
        int res=1;
        res=res*pwr(ans,k);
        cout<<res<<endl;

}
return 0;
}



//******************* sieve start **********************************//
// vector<bool> is_prime;
// void sieve_eth(int n){
// is_prime.resize(n+1,1);
// is_prime[0] = is_prime[1] = false;
// for (int i = 2; i * i <= n; i++) {
//     if (is_prime[i]) {
//         for (int j = i * i; j <= n; j += i)
//             is_prime[j] = false;
//     }
// }
// }


// ll spf[1000001];
 
// vector<ll> primes;
// void sieve() {
//  spf[1] = 1;
//  for (ll i = 2; i < 1000001; i++) {
//      spf[i] = i;
//  }
 
//  for (ll i = 4; i < 1000001; i += 2) {
//      spf[i] = 2;
//  }
 
//  for (ll i = 3; i * i < 1000001; i++) {
//      if (spf[i] == i) {
//          for (ll j = i * i; j < 1000001; j += i) {
//              if (spf[j] == j)
//                  spf[j] = i;
//          }
 
//      }
//  }
//  for (ll i = 2; i < 1000001; i++) {
//      if (spf[i] == i) {
//          primes.push_back(i);
//      }
//  }
// }
 
// vector<ll> getFactorization(ll x) {
//  vector<ll> ret;
//  while (x != 1) {
 
//      ret.push_back(spf[x]);
//      x = x / spf[x];
//  }
//  return ret;
// }
//******************* sieve ends **********************************//

//******************* ncr starts **********************************//

 
// ll power(ll x, ll i, ll p) {
//  ll ans = 1;
//  while (i > 0) {
//      if (i & 1)ans = (ans * x) % p;
//      i >>= 1;
//      x = (x * x) % p;
//  }
//  return ans;
// }
 
// ll modular_inverse(ll n, ll p) {
//  return power(n, p - 2, p);
// }
 
 
// long long fac[200000 + 1];
// void factorial() {
 
//  fac[0] = 1;
//  for (int i = 1 ; i <= 200000; i++) {
 
//      fac[i] = fac[i - 1] * i % mod;
//  }
// }
// ll ncr(ll n, ll r, ll p) {
//  if (r > n)   {
//      return 0;
//  }
//  if (n < 0 || r < 0)  {
//      return 0;
//  }
//  if (r == 0)
//      return 1;
 
//  return (fac[n] * power(fac[r], p - 2, p) % p * power(fac[n - r], p - 2, p) % p) % p;
// }
//******************* ncr starts **********************************//
//******************* dsu  ends **********************************//

// struct dsu{
//     vector<int> parent;
//     vector<int> st ;
//     int n ;
//     void setparent(){
//         for(int i = 0 ; i < n+1 ; i++){
//             parent[i] = i ;
//             st[i] = 1;
//         }
        
//     }
//     int findparent(int v){
//         if(parent[v] == v) return v ;
//         else return parent[v] = findparent(parent[v]);
//     }
   
//      bool unionset(int a , int b){
//         a = findparent(a);
//         b = findparent(b);
//         if(a == b) return false;
//         if(st[a] < st[b]) swap(a , b);
//         parent[b] = a ;
//         st[a] +=st[b]; 
//         return true;
//     }
// };
//******************* dsu ends  **********************************//



// const int Max = 2e5 +1;
// ll fact[Max];
// ll inv_fact[Max];

// void preSolveFact(ll n){
//     ll ans = 1;
//     fact[0] = 1;
//     for(int i = 1; i<=n; i++){
//         ans *=i;
//         ans %= mod;
//         fact[i] = ans;
//     }
//     inv_fact[n] = binpow(fact[n], mod-2);

//     for(int i = n-1; i>=0; i--){
//         inv_fact[i] = inv_fact[i+1] * (i+1) %mod;
//     }
// }
// ll nCr_pre(ll n, ll r){
//     if(n>=r && n>=0 && r>=0)
//     return fact[n] * inv_fact[r] %mod * inv_fact[n-r]%mod;
//     else return 0;
// }










