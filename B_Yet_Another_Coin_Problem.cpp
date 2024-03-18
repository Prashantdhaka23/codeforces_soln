#include<bits/stdc++.h>
using namespace std;



// /*

// ****************************************************************************************
// *                                Jai Bajrangbali                                       *
// *                             codechef-prashantdhaka                                   *
// *                             cf-dhakaprashant666                                      *
// *                         email-:dhakaprashant666@gmail.com                            *
// ****************************************************************************************                                                                         



// */


// #include "bits/stdc++.h"
// using namespace std;
 
// typedef long long int ll;
 
// signed main(){
//     ll n;
//     cin >> n;
//     ll sum = n*(n + 1)/2;
//     if(sum & 1){
//         cout << "NO" << "\n";
//         return 0;
//     }
//     cout << "YES" << "\n";
//     ll pos = 0;
//     ll same = 0;
//     for(ll i = n; i >= 1; --i){
//         pos += i;
//         if(pos > sum/2)
//             pos -= i;
//         else if(pos == sum/2){
//             same = i;
//             break;
//             // pos sol yerde galya
//         }
//     }
//     vector<ll> a;
//     pos = (sum/2) - same;
//     ll pos2 = 0;
//     ll same2 = 0;
//     for(ll i = n; i >= 1; --i){
//         pos2 += i;
//         if(pos2 > pos){
//             same2 = i + 1;
//             break;
//         }
//     }
//     a.push_back(same);
//     for(ll i = n; i >= same2; --i)
//         a.push_back(i);
//     cout << a.size() << "\n";
//     // always sorted
//     for(ll i : a)
//         cout << i << " ";
//     cout << "\n";
//     // O(1) -> set da erase
//     set<ll> s;
//     for(ll i = n; i >= 1; --i)
//         s.insert(i);
//     s.erase(same);
//     for(ll &i : a)
//         s.erase(i);
//     cout << s.size() << "\n";
//     for(ll i : s)
//         cout << i << " ";
//     cout << "\n";
//     return 0;
// }

// //******************* sieve start **********************************//
// // vector<bool> is_prime;
// // void sieve_eth(int n){
// // is_prime.resize(n+1,1);
// // is_prime[0] = is_prime[1] = false;
// // for (int i = 2; i * i <= n; i++) {
// //     if (is_prime[i]) {
// //         for (int j = i * i; j <= n; j += i)
// //             is_prime[j] = false;
// //     }
// // }
// // }


// // ll spf[1000001];
 
// // vector<ll> primes;
// // void sieve() {
// //  spf[1] = 1;
// //  for (ll i = 2; i < 1000001; i++) {
// //      spf[i] = i;
// //  }
 
// //  for (ll i = 4; i < 1000001; i += 2) {
// //      spf[i] = 2;
// //  }
 
// //  for (ll i = 3; i * i < 1000001; i++) {
// //      if (spf[i] == i) {
// //          for (ll j = i * i; j < 1000001; j += i) {
// //              if (spf[j] == j)
// //                  spf[j] = i;
// //          }
 
// //      }
// //  }
// //  for (ll i = 2; i < 1000001; i++) {
// //      if (spf[i] == i) {
// //          primes.push_back(i);
// //      }
// //  }
// // }
 
// // vector<ll> getFactorization(ll x) {
// //  vector<ll> ret;
// //  while (x != 1) {
 
// //      ret.push_back(spf[x]);
// //      x = x / spf[x];
// //  }
// //  return ret;
// // }
// //******************* sieve ends **********************************//

// //******************* ncr starts **********************************//

 
// // ll power(ll x, ll i, ll p) {
// //  ll ans = 1;
// //  while (i > 0) {
// //      if (i & 1)ans = (ans * x) % p;
// //      i >>= 1;
// //      x = (x * x) % p;
// //  }
// //  return ans;
// // }
 
// // ll modular_inverse(ll n, ll p) {
// //  return power(n, p - 2, p);
// // }
 
 
// // long long fac[200000 + 1];
// // void factorial() {
 
// //  fac[0] = 1;
// //  for (int i = 1 ; i <= 200000; i++) {
 
// //      fac[i] = fac[i - 1] * i % mod;
// //  }
// // }
// // ll ncr(ll n, ll r, ll p) {
// //  if (r > n)   {
// //      return 0;
// //  }
// //  if (n < 0 || r < 0)  {
// //      return 0;
// //  }
// //  if (r == 0)
// //      return 1;
 
// //  return (fac[n] * power(fac[r], p - 2, p) % p * power(fac[n - r], p - 2, p) % p) % p;
// // }
// //******************* ncr starts **********************************//
// //******************* dsu  ends **********************************//

// // struct dsu{
// //     vector<int> parent;
// //     vector<int> st ;
// //     int n ;
// //     void setparent(){
// //         for(int i = 0 ; i < n+1 ; i++){
// //             parent[i] = i ;
// //             st[i] = 1;
// //         }
        
// //     }
// //     int findparent(int v){
// //         if(parent[v] == v) return v ;
// //         else return parent[v] = findparent(parent[v]);
// //     }
   
// //      bool unionset(int a , int b){
// //         a = findparent(a);
// //         b = findparent(b);
// //         if(a == b) return false;
// //         if(st[a] < st[b]) swap(a , b);
// //         parent[b] = a ;
// //         st[a] +=st[b]; 
// //         return true;
// //     }
// // };
// //******************* dsu ends  **********************************//



// // const int Max = 2e5 +1;
// // ll fact[Max];
// // ll inv_fact[Max];

// // void preSolveFact(ll n){
// //     ll ans = 1;
// //     fact[0] = 1;
// //     for(int i = 1; i<=n; i++){
// //         ans *=i;
// //         ans %= mod;
// //         fact[i] = ans;
// //     }
// //     inv_fact[n] = binpow(fact[n], mod-2);

// //     for(int i = n-1; i>=0; i--){
// //         inv_fact[i] = inv_fact[i+1] * (i+1) %mod;
// //     }
// // }
// // ll nCr_pre(ll n, ll r){
// //     if(n>=r && n>=0 && r>=0)
// //     return fact[n] * inv_fact[r] %mod * inv_fact[n-r]%mod;
// //     else return 0;
// // }











vector<int> dp;

void solve(){
    int n;
    cin>>n;

    

    int ans=n/15;

    n=n%15;


    int b=ans;


    while(n<900 && b>0){
        n+=15;
        ans--;
        b--;
    }

    ans+=dp[n];
    cout<<ans<<endl;
}

int main(){
   
    int t=1;

    cin>>t;
  dp.resize(10000,1e8);
    
    dp[0]=0;
    vector<int> v={1,3,6,10,15};
    for(int i=1;i<10000;i++){
        for(int j=0;j<v.size();j++){
            if(i-v[j]>=0){
                dp[i]=min(dp[i],dp[i-v[j]]+1);
            }
        }
    }
    while(t--){
        solve();
    }
    return 0;
}

// /*

// ****************************************************************************************
// *                                Jai Bajrangbali                                       *
// *                             codechef-prashantdhaka                                   *
// *                             cf-dhakaprashant666                                      *
// *                         email-:dhakaprashant666@gmail.com                            *
// ****************************************************************************************                                                                         



// */


// #include "bits/stdc++.h"
// using namespace std;
 
// typedef long long int ll;
 
// signed main(){
//     ll n;
//     cin >> n;
//     ll sum = n*(n + 1)/2;
//     if(sum & 1){
//         cout << "NO" << "\n";
//         return 0;
//     }
//     cout << "YES" << "\n";
//     ll pos = 0;
//     ll same = 0;
//     for(ll i = n; i >= 1; --i){
//         pos += i;
//         if(pos > sum/2)
//             pos -= i;
//         else if(pos == sum/2){
//             same = i;
//             break;
//             // pos sol yerde galya
//         }
//     }
//     vector<ll> a;
//     pos = (sum/2) - same;
//     ll pos2 = 0;
//     ll same2 = 0;
//     for(ll i = n; i >= 1; --i){
//         pos2 += i;
//         if(pos2 > pos){
//             same2 = i + 1;
//             break;
//         }
//     }
//     a.push_back(same);
//     for(ll i = n; i >= same2; --i)
//         a.push_back(i);
//     cout << a.size() << "\n";
//     // always sorted
//     for(ll i : a)
//         cout << i << " ";
//     cout << "\n";
//     // O(1) -> set da erase
//     set<ll> s;
//     for(ll i = n; i >= 1; --i)
//         s.insert(i);
//     s.erase(same);
//     for(ll &i : a)
//         s.erase(i);
//     cout << s.size() << "\n";
//     for(ll i : s)
//         cout << i << " ";
//     cout << "\n";
//     return 0;
// }

// //******************* sieve start **********************************//
// // vector<bool> is_prime;
// // void sieve_eth(int n){
// // is_prime.resize(n+1,1);
// // is_prime[0] = is_prime[1] = false;
// // for (int i = 2; i * i <= n; i++) {
// //     if (is_prime[i]) {
// //         for (int j = i * i; j <= n; j += i)
// //             is_prime[j] = false;
// //     }
// // }
// // }


// // ll spf[1000001];
 
// // vector<ll> primes;
// // void sieve() {
// //  spf[1] = 1;
// //  for (ll i = 2; i < 1000001; i++) {
// //      spf[i] = i;
// //  }
 
// //  for (ll i = 4; i < 1000001; i += 2) {
// //      spf[i] = 2;
// //  }
 
// //  for (ll i = 3; i * i < 1000001; i++) {
// //      if (spf[i] == i) {
// //          for (ll j = i * i; j < 1000001; j += i) {
// //              if (spf[j] == j)
// //                  spf[j] = i;
// //          }
 
// //      }
// //  }
// //  for (ll i = 2; i < 1000001; i++) {
// //      if (spf[i] == i) {
// //          primes.push_back(i);
// //      }
// //  }
// // }
 
// // vector<ll> getFactorization(ll x) {
// //  vector<ll> ret;
// //  while (x != 1) {
 
// //      ret.push_back(spf[x]);
// //      x = x / spf[x];
// //  }
// //  return ret;
// // }
// //******************* sieve ends **********************************//

// //******************* ncr starts **********************************//

 
// // ll power(ll x, ll i, ll p) {
// //  ll ans = 1;
// //  while (i > 0) {
// //      if (i & 1)ans = (ans * x) % p;
// //      i >>= 1;
// //      x = (x * x) % p;
// //  }
// //  return ans;
// // }
 
// // ll modular_inverse(ll n, ll p) {
// //  return power(n, p - 2, p);
// // }
 
 
// // long long fac[200000 + 1];
// // void factorial() {
 
// //  fac[0] = 1;
// //  for (int i = 1 ; i <= 200000; i++) {
 
// //      fac[i] = fac[i - 1] * i % mod;
// //  }
// // }
// // ll ncr(ll n, ll r, ll p) {
// //  if (r > n)   {
// //      return 0;
// //  }
// //  if (n < 0 || r < 0)  {
// //      return 0;
// //  }
// //  if (r == 0)
// //      return 1;
 
// //  return (fac[n] * power(fac[r], p - 2, p) % p * power(fac[n - r], p - 2, p) % p) % p;
// // }
// //******************* ncr starts **********************************//
// //******************* dsu  ends **********************************//

// // struct dsu{
// //     vector<int> parent;
// //     vector<int> st ;
// //     int n ;
// //     void setparent(){
// //         for(int i = 0 ; i < n+1 ; i++){
// //             parent[i] = i ;
// //             st[i] = 1;
// //         }
        
// //     }
// //     int findparent(int v){
// //         if(parent[v] == v) return v ;
// //         else return parent[v] = findparent(parent[v]);
// //     }
   
// //      bool unionset(int a , int b){
// //         a = findparent(a);
// //         b = findparent(b);
// //         if(a == b) return false;
// //         if(st[a] < st[b]) swap(a , b);
// //         parent[b] = a ;
// //         st[a] +=st[b]; 
// //         return true;
// //     }
// // };
// //******************* dsu ends  **********************************//



// // const int Max = 2e5 +1;
// // ll fact[Max];
// // ll inv_fact[Max];

// // void preSolveFact(ll n){
// //     ll ans = 1;
// //     fact[0] = 1;
// //     for(int i = 1; i<=n; i++){
// //         ans *=i;
// //         ans %= mod;
// //         fact[i] = ans;
// //     }
// //     inv_fact[n] = binpow(fact[n], mod-2);

// //     for(int i = n-1; i>=0; i--){
// //         inv_fact[i] = inv_fact[i+1] * (i+1) %mod;
// //     }
// // }
// // ll nCr_pre(ll n, ll r){
// //     if(n>=r && n>=0 && r>=0)
// //     return fact[n] * inv_fact[r] %mod * inv_fact[n-r]%mod;
// //     else return 0;
// // }










