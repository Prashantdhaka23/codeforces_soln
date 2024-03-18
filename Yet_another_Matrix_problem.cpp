#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define INF INT64_MAX
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define umap unordered_map
#define mii map<int, int>
#define pii pair<int, int>
#define vi vector<int>
#define vb vector<bool>
#define vvi vector<vi>
#define vpii vector<pii>
#define ff first
#define ss second
#define rep(i,x,y) for(int i=x; i<y; i++)
#define setbitsll(n)  __builtin_popcountll(n)
#define setbits(n)  __builtin_popcount(n)
#define yn(f) f?cout<<"YES\n":cout<<"NO\n"
#define syn(f) f?cout<<"Yes\n":cout<<"No\n"

const int M=1000000007;
//const int M=998244353;

int lcm(int a, int b){int g=__gcd(a, b); return a/g*b;}

int fact(int n){n%=M; if(n<=1) return 1; return n*fact(n-1)%M;}

int powm(int x,int n){
    x%=M;
    if(n==0)return 1; if(n==1)return x;
    int p= powm(x*x,n/2);
    if(n%2) return p*x%M; return p;
}

int mod_div(int p, int q){ return p%M*powm(q,M-2)%M;}

int bitsize(int n){if(n==0) return 0; return 1+bitsize(n>>1);}


const int N=1e7;
vi isPrime, primes;
void sieve(){
    isPrime.assign(N+1,1);
    isPrime[0]=0; isPrime[1]=0;
    for(int i=2; i*i<=N; i++) if(isPrime[i]) for(int j=i*i; j<=N; j+=i) isPrime[j]=0;
    //rep(i,2,N+1) if(isPrime[i]) primes.pb(i);
}

/*-------------------------------------------------------------------------------------------------------------------------------------*/



void solve(){
    int n;
    cin>>n;
    vvi a(n, vi(n));
    a[0][0]=1;
    int odd=3, even=2;
    if(n==2){
        cout<<"-1\n";
        return;
    }
    rep(i,0,n){
        
        rep(j,i,n){
            if(j==i){
                if(i==0) continue;
                if(i==1 && n%2==0){
                    a[i][j]=odd;
                    odd+=2;
                }
                else{
                    a[i][j]=even;
                    even+=2;
                }
                continue;
            }
            if(i==0 && j<=2 && n%2==0){
                a[i][j]=odd;
                a[j][i]=even;
                odd+=2;
                even+=2;
            } 
            else if(odd<=n*n){
                a[i][j]=odd;
                a[j][i]=odd+2;
                odd+=4;
            }
            else{
                a[i][j]=even;
                a[j][i]=even+2;
                even+=4;
            }
        }
    }
    rep(i,0,n){
        rep(j,0,n) cout<<a[i][j]<<' ';
        cout<<'\n';
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r" , stdin);
    //freopen("output.txt", "w", stdout);
    #endif
    
    int t=1;
    cin>>t;
    rep(i,1,t+1){
        //cout<<"Case #"<<i<<": ";
        solve();
    }

    return 0;
}