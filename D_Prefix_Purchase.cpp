
#include <bits/stdc++.h>
using namespace std;

#define rep(i, j, n)    for(ll i=j; i<n; i++)
#define rrep(i, n, j)   for(ll i=n; i>=j; i--)
#define ll long long
#define int ll
#define ld long double
#define pb push_back
#define mp make_pair
#define vb vector<bool>
#define vi vector<int>
#define vc vector<char>
#define vvc vector<vc>
#define vvi vector<vi>
#define vll vector<ll>
#define vvll vector<vll>
#define vs vector<string>
#define pii pair<ll, ll>
#define vpii vector<pii>
#define mpi map<int, int>
#define ff first
#define ss second
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define input(a, n)            \
    for (ll i = 0; i < n; i++) \
        cin >> a[i];
#define output(a, n)           \
    for (ll i = 0; i < n; i++) \
        cout << a[i] << " ";
#define star   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define nl cout << "\n"
#define yes  cout<<"YES"<<endl
#define no  cout<<"NO"<<endl
#define prt(x)     cout<<x<<endl
#define INF 1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
int ncr(int n, int r){
    long long p = 1, k = 1;
    if (n - r < r)  r = n - r;
    if (r != 0) {
        while (r) {
            p *= n; k *= r;
            long long m = __gcd(p, k);
            p /= m; k /= m;
            n--; r--;
        }
    } else  p = 1;
    return p;}
vb sieve(ll n){
    vb is_prime(n+1, true);
    is_prime[0] = is_prime[1] = false;

    for(ll i=2; i*i<=n; i++)
        if(is_prime[i])
            for(ll j=i*i; j<=n; j+=i)   is_prime[j] = false;

    return is_prime;}
ll binpow(ll a, ll b){
    if(b == 0)  return 1;
    ll res = binpow(a, b/2);
    if(b&1) return res*res*a;
    else    return res*res;}
ll binpow(ll a, ll b, ll m){
    a %= m;
    ll res = 1;
    while(b > 0){
        if(b&1) res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;}
ll binpow_inverse(ll base, ll mod){
    return binpow(base, mod-2, mod);}
ll lcm(ll a, ll b){
    return a*b/__gcd(a, b);}
ll accurateFloor(ll a, ll b) {
    ll val = a / b;
    while (val * b > a)
        val--;
    return val;}



bool isPrime(int n){
    if(n <= 1)  return 0;
    if(n == 2 or n == 3)    return 1;

    if(n % 2 == 0 or n % 3 == 0)    return 0;
    for(int i = 5; i<=sqrt(n); i+=6){
        if(n % i == 0 or n % (i + 2) == 0)  return 0;
    }
    return 1;}
vll spf;
#define MAXN 10000005
// // GIVE PRIME FACTORISATION OF X (BUT FIRST CALL SIEVE2 FROM MAIN)
vector<int> getFactorization(int x){
    vector<int> ret;
    while (x != 1) {
        ret.push_back(spf[x]);
        x = x / spf[x];
    }
    return ret;}
void sieve2(){
    spf[1] = 1;
    for (int i = 2; i < MAXN; i++)  spf[i] = i;
    for (int i = 4; i < MAXN; i += 2)   spf[i] = 2;
 
    for (int i = 3; i * i < MAXN; i++) {
        if (spf[i] == i) {
            for (int j = i * i; j < MAXN; j += i)
                if (spf[j] == j)    spf[j] = i;
        }
    }}














/*
 ******************************************************************
 ******************************************************************
 ******************************************************************
 ********************** WRITE CODE FROM HERE **********************
 ******************************************************************
 ******************************************************************
 ******************************************************************
*/


void solve(){
    int n; cin>>n;
    vi c(n); input(c, n);
    int k; cin>>k;

    multiset<pii> ms;
    map<int, int> idx;
    rep(i, 0, n){
        ms.insert({c[i], i});
        idx[c[i]] = i;
    }

    vi res(n + 1, 0);
    int d=1e9;
    pii prev = {-1, -1};
    while(k > 0 and ms.size()){
        auto top = *ms.begin();
        if(k < top.ff){
            int find = k + prev.ff;
            if(idx[find] > prev.ss){
                res[prev.ss + 1]++;
                res[idx[find] + 1]--;
            }
            break;
        }
        d=min(d,k/top.ff);
        res[0] += d; res[top.ss + 1] -= d;
        k -= d* (k / top.ff);
        ms.erase(ms.begin());
        prev = top;
    }
    rep(i, 1, n)    res[i] += res[i-1];
    output(res, n); nl;
}



// CODE HERE
signed main() {
    star;
    ll t;
    t = 1;
    cin>>t;
    while(t--){solve();}
    return 0;
}






