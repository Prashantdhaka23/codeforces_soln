#include <bits/stdc++.h> 

using namespace std; 

// #define int long long 
#define ff first 
#define ss second 
#define pb push_back 
#define vi vector<int> 
#define qi queue<int> 
#define mii map<int, int> 
#define pii pair<int, int> 
#define mip map<int, pair<int, int>> 
#define double long double 
#define FOR(i, k, n) for (int i = k; i < n; i++) 
#define all(a) a.begin(), a.end() 
#define rall(a) a.rbegin(), a.rend() 
#define double long double 
#define get(a)        \ 
    for (auto &i : a) \ 
    cin >> i 
#define put(a)        \ 
    cout << endl;     \ 
    for (auto &i : a) \ 
    cout << i << " " 
#define ps(x, y) fixed << setprecision(y) << x 
#define endl "\n" 
#define sp << " " << 
#define P(x) cout << x << endl 

const int mod = 1000000007; 

void solve() 
{ 
    int n, m; 
    cin >> n >> m; 
    cout << "? 1 1" << endl; 
    int a; 
    cin >> a; 
    a += 2; 
    cout << "? " << n << " 1" << endl; 
    int b; 
    cin >> b; 
    b -= (n - 1); 
    b = -b; 
    int x = (a + b) / 2; 
    int y = a - x; 
    if (x >= 1 && x <= n && y >= 1 && y <= m) 
    { 
        cout << "? " << x << " " << y << endl; 
        int out; 
        cin >> out; 
        if (out == 0) 
        { 
            cout << "! " << x << " " << y; 
        } 
        else 
        { 
            cout << "? " << n << " " << m << endl; 
            int c; 
            cin >> c; 
            c -= (n + m); 
            c = -c; 
            a = c; 
            x = (a + b) / 2; 
            y = a - x; 
            cout << "! " << x << " " << y; 
        } 
    } 
    else 
    { 
        cout << "? " << n << " " << m << endl; 
        int c; 
        cin >> c; 
        c -= (n + m); 
        c = -c; 
        a = c; 
        x = (a + b) / 2; 
        y = a - x; 
        cout << "! " << x << " " << y; 
    } 
} 
signed main() 
{ 
    // ios::sync_with_stdio(0); 
    // cin.tie(0); 
    // cout.tie(0); 
    int i = 1; 
    int t = 1; 
    cin >> t; 
    while (t--) 
    { 
        // cout<<"Case #"<<i++<<": "; 
        solve(); 
        cout << endl; 
    } 
    return 0; 
}