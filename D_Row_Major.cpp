#include <iostream>
#include <vector>
#include <set>
#include <string>
#include<bits/stdc++.h>
using namespace std;
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
 



int main() {
    int t;
    cin >> t ;

    while (t-- > 0) {
        int n;
       cin >> n;
        vector<int> v ;

        for(int i=1;i<=n;i++){
v.push_back(i);
        }
       vector<vector<int>> grid(n, vector<int>(26));
     vector<int> val(n);
   string res="";


        for (int i = 0; i < n; i++) {
            for (int f : v) {
                if (i + f >= n)
                    break;
                grid[i + f][val[i]] = 1;
            }
            if (i + 1 < n) {
                for (int j = 0; j < 26; j++) {
                    if (grid[i + 1][j] == 0) {
                        val[i + 1] = j;
                        break;
                    }
                }
            }
        }


        for (int value : val) {
            res += char(value + 'a');
        }
        // resultString += "\n";
       cout << res<<endl;;
    }

    return 0;
}
