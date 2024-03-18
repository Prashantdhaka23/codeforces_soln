
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

// int n,m; cin>>n>>m; vector<int> v1(n);  vector<int> v2(m); for(int i=0;i<n;i++){  cin>>v1[i];} for(int i=0;i<m;i++){  cin>>v2[i];}

//*** double array input *******//


//****** vector input start ******//

// int n; cin>>n; vector<int> v(n);  for(int i=0;i<n;i++){       cin>>v[i];    }

//****** vector input end ******//

int f(vector<int>&a,int mid,int d,int c){
    //mid max hi repeat mod emei chalege
    mid++;
    int ans=0;
    int n=a.size();
    for(int i=0;i<d;i++){

        if((i%mid) < n) ans+=a[(i%mid)];
    }
    if(ans>=c) return true;
    return false;

}
int32_t main()
{
    int t1;
    cin >> t1;
    // t1=1;

    while (t1--)
    {
        int n,c,d;
        cin>>n>>c>>d;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int lo=0,hi=d+2;
        int ans=-1;
        //if vo badna uise hone ka baad d din tak avaliable hi na ho tab bhi app agar acheive kar pa re ho traget
        //means inf case hai
        sort(a.begin(),a.end(),greater<int>());
        while(lo<=hi){
            int mid=lo+((hi-lo)/2);

            if(f(a,mid,d,c)){
                ans=mid;
                lo=mid+1;
            }else{
                hi=mid-1;
            }
            
        }
        if(ans==-1){
            cout<<"Impossible"<<endl;
        }else{
            if(ans==d+2){
                cout<<"Infinity"<<endl;
            }else{
                cout<<ans<<endl;
            }
        }
    }
}









