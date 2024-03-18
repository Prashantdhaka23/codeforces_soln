//****************************Template Begins****************************//
// Header Files
#include <bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
#include<set>
#include<unordered_set>
#include<list>
#include<iterator>
#include<deque>
#include<queue>
#include<stack>
#include<set>
#include<bitset>
#include<map>
#include<unordered_map>
#include<stdio.h>
#include<complex>
#include<math.h>
#include<chrono>
#include<cstring>
#include<string>
// Header Files End
 
using namespace std;
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long
#define umap unordered_map
#define uset unordered_set
#define lb lower_bound
#define ub upper_bound
#define fo(i,a,b) for(i=a;i<b;i++)
#define all(v) (v).begin(),(v).end()
#define all1(v) (v).begin()+1,(v).end()
#define allr(v) (v).rbegin(),(v).rend()
#define allr1(v) (v).rbegin()+1,(v).rend()
#define sort0(v) sort(all(v))
typedef pair<ll, ll> pii;
typedef vector<ll> vi;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
#define max3(a,b,c) max(max((a),(b)),(c))
#define max4(a,b,c,d) max(max((a),(b)),max((c),(d)))
#define min3(a,b,c) min(min((a),(b)),(c))
#define min4(a,b,c,d) min(min((a),(b)),min((c),(d)))
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define inf 9999999999999
#define endl '\n'
#include "ext/pb_ds/assoc_container.hpp"
#include "ext/pb_ds/tree_policy.hpp"
using namespace __gnu_pbds;
template<class T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update> ;
 
template<class key, class value, class cmp = std::less<key>>
// find_by_order(k)  returns iterator to kth element starting from 0;
// order_of_key(k) returns count of elements strictly smaller than k;
using ordered_map = tree<key, value, cmp, rb_tree_tag, tree_order_statistics_node_update>;
const ll mod1 = 998244353;
const ll mod = 1e9 + 7;
const ll MOD = 1e18 + 1e16;
ll mod_mul(ll a, ll b) {a = a % mod; b = b % mod; return (((a * b) % mod) + mod) % mod;}
 
ll inv(ll i) {if (i == 1) return 1; return (mod - ((mod / i) * inv(mod % i)) % mod) % mod;}
 
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}
 
ll pwr(ll a, ll b) {a %= mod; ll res = 1; while (b > 0) {if (b & 1) res = res * a % mod; a = a * a % mod; b >>= 1;} return res;}
//****************************Template Ends*******************************//
//****************************Functions*******************************//
// const ll M = 4 * 1e5 + 1;
// ll parent[M];
// ll size1[M];
 
// void make_set(ll v) {
//     parent[v] = v;
//     size1[v] = 1;
// }
 
// ll find_set(ll v) {
//     if (v == parent[v])
//         return v;
//     return parent[v] = find_set(parent[v]);
// }
// // DSU
// bool union_sets(ll a, ll b) {
//     a = find_set(a);
//     b = find_set(b);
//     if (a == b) {
//         return false;
//     }
//     if (a != b) {
//         if (size1[a] < size1[b])
//             swap(a, b);
//         parent[b] = a;
//         size1[a] += size1[b];
//     }
//     return true;
// }
 
 
//sparse table
class STable
{
public:
    ll LOG = 0;
    ll n;
    vector<vector<ll>> T;
    STable(vector<ll> &a)
    {
        n = (ll)a.size();
        while (1 << (LOG + 1) <= n)
            LOG++;
        T.resize(LOG + 1);
        for (ll i = 0; i <= LOG; i++)
            T[i].resize(n);
        for (ll i = 0; i < n; i++)
            T[0][i] = a[i];
        for (ll i = 1; i <= LOG; i++)
        {
            for (ll j = 0; j < n - (1 << i) + 1; j++)
            {
                T[i][j] = combine(T[i - 1][j], T[i - 1][j + (1 << (i - 1))]);
            }
        }
    }
    ll combine(ll a, ll b)
    {
        return max(a, b);
    }
    ll qry(ll l, ll r)
    {
        ll exp = 0;
        while (1 << (exp + 1) <= r - l + 1)
            exp++;
        return combine(T[exp][l], T[exp][r - (1 << exp) + 1]);
    }
};
// vector<vll> dp(n + 1, vll(k + 1, 99999999999));
 
 
 
//         dp[0][0] = 0;
//         for (ll i = 0; i <= n; i++)
// for (ll j = 0; j < k; j++) {
//             dp[i][j + 1] = min(dp[i][j + 1], dp[i][j]);
// MCMF (hungarian algo) flows,graph matching,dp
//             if (i < n)
//                 dp[i + 1][j + 1] = min(dp[i + 1][j + 1], dp[i][j] + abs(a[i] - (j + 1)));
//         }
ll findMinNumber(ll n)
{
    ll count = 0, ans = 1;
 
    // Since 2 is oendly even prime, compute its
    // power seprately.
    while (n % 2 == 0)
    {
        count++;
        n /= 2;
    }
 
    // If count is odd, it must be removed by dividing
    // n by prime number.
    if (count % 2)
        ans *= 2;
 
    for (ll i = 3; i <= sqrt(n); i += 2)
    {
        count = 0;
        while (n % i == 0)
        {
            count++;
            n /= i;
        }
 
        // If count is odd, it must be removed by
        // dividing n by prime number.
        if (count % 2)
            ans *= i;
    }
 
    if (n > 2)
        ans *= n;
 
    return ans;
}
//*****binary lifting begins*****
 
// vector<vll>parent;
// vll depth;
// ll mx_pow = 20;// change this as required(max value is 2^(mx_pow-1), not 2^(mx_pow))
// void assign_parent(ll curr_node, ll par)
// {
//     for (auto x : adj[curr_node])
//     {
//         if (x == par)res=1;continue;
//         depth[x] = 1 + depth[curr_node];
//         parent[x][0] = curr_node;
//         assign_parent(x, curr_node);
//     }
// }
// // call the following function in main :
// void binary_lifting(ll n)
// {
//     ll i, j, temp;
//     parent.assign(n + 1, vll(mx_pow, 0));
//     depth.assign(n + 1, 0);
//     assign_parent(1, -1);
 
//     for (j = 1; j < mx_pow; j++)
//     {
//         for (i = 1; i <= n; i++)
//         {
//             temp = parent[i][j - 1];
//             parent[i][j] = parent[temp][j - 1];
//         }
//     }
 
// }
 
// //*****binary lifting ends*****
 
// //******lca begins*******
 
// // comment the following function if you oendly need binary lifting and not lca
// ll get_lca(ll u, ll v)
// {
//     if (depth[u] < depth[v])swap(u, v);
//     ll jump = depth[u] - depth[v];
//     ll i, j;
//     for (j = 0; j < mx_pow; j++)
//     {
//         if (jump & (1 << j))
//         {
//             u = parent[u][j];
//         }
//     }
//     if (u == v)return u;
//     for (j = mx_pow - 1; j >= 0; j--)
//     {
//         if (parent[u][j] != parent[v][j])
//         {
//             u = parent[u][j];
//             v = parent[v][j];
//         }
//     }
//     return parent[u][0];
// }
// //*******lca ends********
 
// ll get_distance(ll u, ll v)
// {
//     ll lc = get_lca(u, v);
//     return depth[u] + depth[v] - 2 * depth[lc];
// }
 
// ll fact(ll n , ll mod)
// {
//     ll p=1;
//     if (n == 0)
//         return 1;
 
//     else
//     {
//         for(ll i=1;i<=n;i++)
//         {p*=i;
//         p=p%mod;}
//         return p;
//     }
// }
 
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
// vll fact(300005, 1);
// fo(i, 2, 300005)
// {
//     fact[i] = mod_mul(fact[i - 1], i); //include the loop inside ll main()
// }
 
// ll C(ll n, ll r)
// {
//     ll ans = 1;
//     ans = fact[n];
//     ans = mod_mul(ans, pwr(fact[r], mod - 2));
//     ans = mod_mul(ans, pwr(fact[n - r], mod - 2));
//     return ans;
// }
// vector<bool>isprime(10000001, true);
// vll primes;
 
// void sieve()
// {
//  ll i, j;
//  fo(i, 2, 10000001)
//  {
//      if (isprime[i])
//      {
//          for (j = i * i; j <= 10000000; j += i)
//          {
//              isprime[j] = false;
//          }
//      }
//  }
//  fo(i, 2, 10000001)if (isprime[i])primes.pb(i);
// }
//  -------------- DIJKSTRA --------------
// ll INF = 1e16;
// void disp(vll v)
// {
//     for(auto u:v)
//     cout<<u<<" ";
//     cout<<"\n";
// }
// vll p(200001),d(200001);
 
// map<pll,ll>m1;
// vector<pair<ll,ll>> adj[100005];
// ll n;
 
// void dijkstra(ll s,vll d, vll p, ll f)
// {
//     d .assign(n+1,INF);
//     p .assign(n+1,-1);
//     priority_queue<pll> q;
//     d[s]=0;
//     q .push({0,s});
//      while(!q.empty())
//     {
//          ll v  =q.top().second;
//         ll d_v   = -(q.top().first);
//         q .pop();
//         if(d_v!=d[v])res=1;continue;
 
//         for(auto edge:adj[v])
//         {
//              auto to = edge.first;
//              auto len = edge.second;
//             if(d[v] + len < d[to])
//             {
//                 d[to] = d[v] + len;
//                 p[to]=v;
//                 q .push({-d[to],to});
//             }
//         }
 
//     }
//     ll v=f;
//     if(d[f]==INF)
//     {
//         cout<<-1;
//         return ;
//     }
//     vll path;
//     while(v!=-1)
//     {
//         path .pb(v);
//         v=p[v];
//     }
//     reverse(all(path));
//     disp(path);
// }
//  -------------- SEGMENT TREE ----------
// ll const N = 2e5 + 10;
// ll t[4 * N];
// void update(ll v, ll tl, ll tr, ll id, ll val)
// {
//     if (tr == tl and tr == id)
//     {
//         t[v] = val;
//         return;
//     }
//     if (id<tl or id>tr)
//         return;
//     ll tm = (tr + tl) / 2;
//     update(2 * v, tl, tm, id, val);
//     update(2 * v + 1, tm + 1, tr, id, val);
//     t[v] = t[2 * v] + t[2 * v + 1];
 
// }
// ll query(ll v, ll tl, ll tr, ll l, ll r)
// {
//     if (l > tr or r < tl)
//         return 0;
//     if (l <= tl and r >= tr)
//         return t[v];
//     ll tm = (tr + tl) / 2;
//     ll ans = 0;
//     ans += query(2 * v, tl, tm, l, r);
//     ans += query(2 * v + 1, tm + 1, tr, l, r);
//     return ans;
// }
// vll dx = {1, -1, 0, 0};
// vll dy = {0, 0, 1, -1};
// ll N = 1e5;
// vll fact(N + 1, 1);
// vll ifact(N + 1, 1);
// ll C(ll n, ll r)
// {
//     if (r > n)
//         return 0;
//     ll ans = fact[n];
//     ans = mod_mul(ans, ifact[r]);
//     ans = mod_mul(ans, ifact[n - r]);
//     return ans;
 
// }
// fo(i, 2, N + 1)
//     {
//         fact[i] = mod_mul(fact[i - 1], i);
//     }
//     ifact[N] = inv(fact[N]);
//     for (i = N - 1; i > 0; i--)
//     {
//         ifact[i] = mod_mul(i + 1, ifact[i + 1]);
//     }
const auto start_time = chrono::high_resolution_clock::now();
void output_run_time() {
    // will work for ac,cc&&cf.
#ifndef ONLINE_JUDGE
    auto end_time = chrono::high_resolution_clock::now();
    chrono::duration<double> diff = end_time - start_time;
    cout << "\n\n\nTime Taken : " << diff.count();
#endif
}
ll const N = 3e6 + 10;
ll t[8 * N], lazy[8 * N];
void push(ll v) {
    t[v * 2] += lazy[v];
    lazy[v * 2] += lazy[v];
    t[v * 2 + 1] += lazy[v];
    lazy[v * 2 + 1] += lazy[v];
    lazy[v] = 0;
}
 
void update(ll v, ll tl, ll tr, ll l, ll r, ll addend)
{
    if (l > r)
        return;
    if (l == tl && tr == r) {
        t[v] += addend;
        lazy[v] += addend;
    } else {
        push(v);
        ll tm = (tl + tr) / 2;
        update(v * 2, tl, tm, l, min(r, tm), addend);
        update(v * 2 + 1, tm + 1, tr, max(l, tm + 1), r, addend);
        t[v] = max(t[v * 2], t[v * 2 + 1]);
    }
}
 
ll query(ll v, ll tl, ll tr, ll l, ll r) {
    if (l > r)
        return -1e9;
    if (l <= tl && tr <= r)
        return t[v];
    push(v);
    ll tm = (tl + tr) / 2;
    return max(query(v * 2, tl, tm, l, min(r, tm)),
               query(v * 2 + 1, tm + 1, tr, max(l, tm + 1), r));
}
int main() {
 
    fio;
 
    ll n;
    cin >> n;
    ll x[n + 1], y[n + 1], i;
    fo(i, 0, N)
    update(1, 0, N - 1, i, i, i);
    for (ll i = 1; i < n + 1; i++)
    {
        char c;
        cin >> c;
        if (c == '+')
        {
            cin >> x[i] >> y[i];
            update(1, 0, N - 1, 0, x[i], y[i]);
 
        }
        else if (c == '-')
        {
            cin >> x[i];
            update(1, 0, N - 1, 0, x[x[i]], -y[x[i]]);
        }
        else if (c == '?')
        {
            cin >> x[i];
 
            cout << max(0ll, query(1, 0, N - 1, 0, x[i]) - query(1, 0, N - 1, x[i] + 1, x[i] + 1) + 1ll) <<  endl;
        }
    }
 
 
 
 
 
 
 
    // output_run_time();
 
    return 0;
}
//remove #define endl '\n' for lleractive problems
