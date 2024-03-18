
/*

****************************************************************************************
*                                Jai Bajrangbali                                       *
*                             codechef-prashantdhaka                                   *
*                             cf-dhakaprashant666                                      *
*                         email-:dhakaprashant666@gmail.com                            *
****************************************************************************************                                                                         



*/




#include<bits/stdc++.h>
using namespace std;


#define prashant ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

// Debug Template, copied from Mikel_Arteta_8 (https://codeforces.com/blog/entry/68809)
void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifdef prashant
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
// End of debugging template

#define db(...)                 __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char* name, Arg1&& arg1) { cerr << " "<< name << " : " << arg1 <<'\n'; }
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args) {
    const char* comma = strchr(names + 1, ',');
    cerr.write(names, comma - names) << " : " << arg1 << " | "; __f(comma + 1, args...);
}
 
mt19937 rng((unsigned int) chrono::steady_clock::now().time_since_epoch().count());
        //  shuffle(arr.begin(), arr.end(), rng); 
        //  or rng() to generate random number
 
       
 
#define endl                                "\n"
#define int                                 long long    //in case of mle ,tle high constraints
#define ll                                  long long
#define umap                                unordered_map
#define uset                                unordered_set
#define lb                                  lower_bound
#define ub                                  upper_bound
#define fo(i,a,b)                           for(i=a;i<=b;i++)
#define all(v)                              (v).begin(),(v).end()
#define all1(v)                             (v).begin()+1,(v).end()
#define allr(v)                             (v).rbegin(),(v).rend()
#define allr1(v)                            (v).rbegin()+1,(v).rend()
#define sort0(v)                            sort(all(v))
typedef pair<int,int>                       pii;
typedef pair<char,int>                      pci;
typedef vector<int>                         vi;
typedef vector<ll>                          vll;
typedef pair<ll, ll>                        pll;
#define sz(x)                               (ll)x.size()
#define sp                                  <<" "<<
#define max3(a,b,c)                         max(max((a),(b)),(c))
#define max4(a,b,c,d)                       max(max((a),(b)),max((c),(d)))
#define pb                                  push_back
#define ppb                                 pop_back
#define fi                                  first
#define se                                  second
#define mkp                                 make_pair
#define py                                  cout<<"Yes"<<endl;
#define pn                                  cout<<"No"<<endl;
#define inf                                 1000000000000000005    //2e18+5


const ll mod = 1e9+7 ;//998244353;
const int N=2e5+5;
 
ll inv(ll i) {if (i == 1) return 1; return (mod - ((mod / i) * inv(mod % i)) % mod) % mod;}
 
ll mod_mul(ll a, ll b) {a = a % mod; b = b % mod; return (((a * b) % mod) + mod) % mod;}
 
ll mod_add(ll a, ll b) {a = a % mod; b = b % mod; return (((a + b) % mod) + mod) % mod;}
 
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}

ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b;}
 
ll ceil_div(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}
 
ll pwr(ll a, ll b) {a %= mod; ll res = 1; while (b > 0) {if (b & 1) res = res * a % mod; a = a * a % mod; b >>= 1;} return res;}

ll pwrl(ll a, ll b) { ll res = 1; while (b > 0) {if (b & 1) res = res * a ; a = a * a ; b >>= 1;} return res;}

//****************************Template Ends*******************************//
 


//****** graph ajaency input******//

//  int n, m; cin >> n >> m;vector<vector<int>> adj(n);for (int i = 0; i < m; i++){ int u, v; cin >> u >> v;  adj[u].pb(v);adj[v].pb(u); }

//****** graph ajaency input end ******//

//******matrix input *******//

// int n,m;cin>>n>>m; vector<vector<int>> arr(n,vector<int> (m,0));for(int i=0;i<n;i++){ for(int j=0;j<m;j++){  cin>>arr[i][j]; } }

//******matrix input end ********//

//******string input**********//

// int n; cin>>n; string s; cin>>s;

// string s; cin>>s;

// int k; cin>>k; string k ; cin>>k ;

// string s1; cin>>s1;


//****string input end ************//

//*** double array input *******//

// int n,m; cin>>n>>m; vector<int> v1(n);  vector<int> v2(n); for(int i=0;i<n;i++){  cin>>v1[i];} for(int i=0;i<m;i++){  cin>>v2[i];}

//*** double array input *******//


//****** vector input start ******//

// int n;
//     cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++){
//          cin>>v[i];
//     }
//****** vector input end ******//

void solve(){
    //check for testcase;
int x=0,y=0,z=0,k=0,ans=-1;
vector<int> ar;
string res="YES";


int n;
    cin>>n;
    ans=0;
    int p=1;
    vector<int> v(n);
    
    for(int i=0;i<n;i++){
         cin>>v[i];
         ans+=abs(v[i]);
        //  p+=v[i];
         if(p>0 && v[i]<0){
            p=-1;
            k++;
         }
         if(v[i]>0){
            p=1;
         }

        //  if(v[i]<0 && p>0){
        //    k++;
        //    p=0;
        //  }
    }
    cout<<ans<<" "<<k<<endl;











}

int32_t main(){
    prashant;
int t=1;
cin>>t;
while(t--){
solve();

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










