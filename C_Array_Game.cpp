#include<bits/stdc++.h>
 
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define M 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
 
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key
 
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
 
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
 
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
 
vector<int>fac(1010,1);
int MOD(int a,int b){
     return (1LL*a*b)%MOD1;
}
ll bnr(ll a,ll b){
     ll res=1;
     while(b>0){
          if(b&1){
               res=MOD(res,a);
          }
          a=MOD(a,a);
          b>>=1;
     }
     return res;
}
int cnr(int n,int r){
     if(r>n) return 0;
     int num=fac[n];
     int den=MOD(fac[n-r],fac[r]);
     den=bnr(den,MOD1-2);
     return MOD(num,den);
}
ll modAdd(ll a,ll b){
     return (a+b)%M;
}
ll modMul(ll a,ll b){
     return (a*b)%M;
}
ll countSetBit(ll n){
     ll cnt=0;
     for(int i=63;i>=0;i--){
          if(((1LL<<i)&n)!=0) cnt++;
     }
     return cnt;
}

const int N=(1<<int(ceil(log2(250000))))+2;
class segTree {
public:
    ll tree[4 * N];

    void updateTree(int ind, int l, int r, vector<int>& a, int i, int new_val) {
        if (l > r) return;
        if (l == r) {
            a[l] += new_val;
            tree[ind] = a[l];
            return;
        }
        int mid = (l + r) >> 1;
        if (i <= mid) {
            updateTree(2 * ind + 1, l, mid, a, i, new_val);
        } else {
            updateTree(2 * ind + 2, mid + 1, r, a, i, new_val);
        }
        tree[ind] = tree[2 * ind + 1] + tree[2 * ind + 2];
    }

    ll query(int ind, int l, int r, vector<int>& a, int s, int e) {
        if (l > r) return 0;
        if (l > e || r < s) return 0;
        if (s <= l && e >= r) return tree[ind];
        int mid = (l + r) >> 1;
        return query(2 * ind + 1, l, mid, a, s, e) + query(2 * ind + 2, mid + 1, r, a, s, e);
    }

    void clear() {
        for (int i = 0; i < 4 * N; i++) tree[i] = 0;
    }
};




 bool cmp(pair<int,int>&a,pair<int,int>&b){
          if(a.first==b.first) return a.second<b.second;
          else return a.first<b.first;
     }
void solve()
{
     ll n,m;
     cin>>n>>m;
     vector<vector<int>>a(m,vector<int>(3,0));
    
     vector<int>end,start;
     for(int i=0;i<m;i++){
           char ch;
           cin>>ch;
           if(ch=='P'){
               int l,r;
               cin>>l>>r;
               a[i][0]=0,a[i][1]=l,a[i][2]=r;
               start.pb(l),end.pb(r);
           }
           else if(ch=='M'){
               ll j,d;
               cin>>j>>d;
               j--;
               a[i][0]=1,a[i][1]=j,a[i][2]=d;
               start.pb(a[j][1]+d),end.pb(a[j][2]+d);
           }
           else{
               int val;
               cin>>val;
               a[i][0]=2,a[i][1]=val,a[i][2]=val;
               start.pb(val),end.pb(val);
           }
     }
    
     sort(all(start));
     sort(all(end));
     int j=1;
     unordered_map<int,int> mp;
     for(int i=0;i<end.size();i++){
         mp[end[i]]=j;
         j++;
     }
     // for given query count number of end<val && start>val and minus 
     // from all current open systems

     vector<int>ans;
     vector<int>e(m+2,0),s(m+2,0);
     //debug(start);
    //  debug(end);
    //  debug(start);
     int curr_sys=0;
     segTree s1,s2;
     s1.clear();
     for(int i=0;i<m;i++){
          if(a[i][0]==0){
               int ind1=mp[a[i][2]];
               s1.updateTree(0,0,m,e,ind1,1);
               
               curr_sys++;
          }
          else if(a[i][0]==1){

               int j=a[i][1],d=a[i][2];

               int ind1=mp[a[j][2]];;
              

               s1.updateTree(0,0,m,e,ind1,-1);
               
               ind1=mp[a[j][2]+d];;
               
               s1.updateTree(0,0,m,e,ind1,1);

          }
          else{
             
               int ind1=mp[a[i][2]];
              
               int r1=s1.query(0,0,m,e,0,ind1-1);
              
               ans.pb(curr_sys-r1);
          }
        //   debug(e);
          //debug(s);
     }
     s1.clear();
     int ind=0;
     mp.clear();
     j=1;
     
     for(int i=0;i<start.size();i++){
         mp[start[i]]=j;
         j++;
     }
     for(int i=0;i<m;i++){
            if(a[i][0]==0){
               int ind2=mp[a[i][1]];  
               s1.updateTree(0,0,m,s,ind2,1);
              
          }
          else if(a[i][0]==1){

               int j=a[i][1],d=a[i][2];

               
               int ind2=mp[a[j][1]];

               
               s1.updateTree(0,0,m,s,ind2,-1);

               
               ind2=mp[a[j][1]+d];

              
               s1.updateTree(0,0,m,s,ind2,1);

          }
          else{
             
              
               int ind2=mp[a[i][1]];
               int r2=s1.query(0,0,m,s,ind2+1,m);
              
               ans[ind]-=r2;;
               ind++;
          }
          //debug(e);
        //   debug(s);
     }
     for(auto i:ans) cout<<i<<endl;
          
     
     

}
        
int main() {
 
     fastio();
    // for(int i=1;i<=1000;i++) fac[i]=MOD(fac[i-1]*i);
     // ll t;
     // cin>>t;
     // while(t--) solve();
     solve();
    
}
