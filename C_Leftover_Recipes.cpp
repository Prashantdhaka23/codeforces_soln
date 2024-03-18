#include <bits/stdc++.h>
#include <vector>
using namespace std;


#define prashant 
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl                                "\n"
#define int                                 long long    //in case of mle ,tle high constraints
#define ll                                  long long
#define umap                                unordered_map
#define uset                                unordered_set

// Debug Template, copied from Mikel_Arteta_8 (https://codeforces.com/blog/entry/68809)
// void __print(int x) {cerr << x;}
// void __print(long x) {cerr << x;}
// void __print(long long x) {cerr << x;}
// void __print(unsigned x) {cerr << x;}
// void __print(unsigned long x) {cerr << x;}
// void __print(unsigned long long x) {cerr << x;}
// void __print(float x) {cerr << x;}
// void __print(double x) {cerr << x;}
// void __print(long double x) {cerr << x;}
// void __print(char x) {cerr << '\'' << x << '\'';}
// void __print(const char *x) {cerr << '\"' << x << '\"';}
// void __print(const string &x) {cerr << '\"' << x << '\"';}
// void __print(bool x) {cerr << (x ? "true" : "false");}
// template<typename T, typename V>
// void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
// template<typename T>
// void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
// void _print() {cerr << "]\n";}
// template <typename T, typename... V>
// void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
// #ifdef prashant
// #define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
// #else
// #define debug(x...)
// #endif
// // End of debugging template

// #define db(...)                 __f(#__VA_ARGS__, __VA_ARGS__)
// template <typename Arg1>
// void __f(const char* name, Arg1&& arg1) { cerr << " "<< name << " : " << arg1 <<'\n'; }
// template <typename Arg1, typename... Args>
// void __f(const char* names, Arg1&& arg1, Args&&... args) {
//     const char* comma = strchr(names + 1, ',');
//     cerr.write(names, comma - names) << " : " << arg1 << " | "; __f(comma + 1, args...);
// }
 
// mt19937 rng((unsigned int) chrono::steady_clock::now().time_since_epoch().count());
//         //  shuffle(arr.begin(), arr.end(), rng); 
//         //  or rng() to generate random number
 
       

// int maxServings(int N, vector<int>& Q, vector<int>& A, vector<int>& B) {
//     vector<int> servings_A(N,1e7);
//     vector<int> servings_B(N,1e7);

//     for (int i = 0; i < N; ++i) {
//       if(A[i]!=0)  servings_A[i] = Q[i] / A[i];
//        if(B[i]!=0)  servings_B[i] = Q[i] / B[i];
//     }
//     // debug(servings_A);

//     int maxServings = *min_element(servings_A.begin(), servings_A.end());
//     maxServings = max(maxServings, *min_element(servings_B.begin(), servings_B.end()));
 
//     for (int i = 0; i < N; ++i) {
//       if(A[i]!=0)  servings_A[i] = (Q[i] -   maxServings *A[i])/ A[i];
//        if(B[i]!=0)  servings_B[i] = (Q[i] -   maxServings *B[i]) / B[i];
//     }
//      int s = *min_element(servings_A.begin(), servings_A.end());
//     s = max(s, *min_element(servings_B.begin(), servings_B.end()));

//     return maxServings + s;
// }

int f( int servings_A ,int N, vector<int> &Q, vector<int>& A, vector<int>& B){
  int x=100;
  for(int i=0;i<N;i++){
     int d= Q[i]-(servings_A*A[i]);
     if(B[i]!=0) x=min(x,d/B[i]);
    //   if(d<0) return -100000;
  }
//   if(x==1e6) return 0;
  return x;

}

int maxServings(int N, vector<int>& Q, vector<int>& A, vector<int>& B) {

    int x=0;
    for (int servingsA = 0; servingsA <=1e6; servingsA++) {
         
        int a= f( servingsA, N, Q, A, B);
         x=max(x,servingsA + a);

    }

    return x;
}






int32_t main() {
    prashant;
    
    for(int i=1;i<=100;i++){
       
        
        for(int )

    }
}
