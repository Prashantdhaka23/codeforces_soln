#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ld = long double;
template<class T> 
using vec = vector<T>;
using vi = vec<int>;
using vl = vec<ll>;
using vd = vec<ld>;
using vvi = vec<vi>;
using vvl = vec<vl>;
using pi = pair<int, int>;
using pl = pair<ll, ll>;
using vpi = vec<pi>;
using vpl = vec<pl>;
template<class T> 
using mxpq = priority_queue<T>;
template<class T> 
using mnpq = priority_queue<T, vec<T>, greater<T>>;
#define pb push_back
#define eb emplace_back
#define acc accumulate



#define MULTI_TESTS
// #define FLOAT_PRECISION 13



void solve(int testIdx) {
    ll k;
    cin >> k;

    ll ex = k;
    int ones = 0;
    cout << "? 0" << endl;
    int tot;
    cin >> tot;
    int prev = tot;
    for (int i = 0; i < 29 and ones < tot; ++i) {
        cout << "? " << (1LL << i) << endl;
        int x;
        cin >> x;
        if (x == -1) {
            return;
        }
        if (x < prev) {
            ones++;
            prev = x;
            continue;
        }
        ex ^= (1LL << i);
        prev = x;
    }

    if (ones < tot) {
        ex ^= (1LL << 29);
    }

    cout << "? " << ex << endl;
    int x;
    cin >> x;
    cout << "!" << endl;
}

void init() {
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin.exceptions(cin.failbit);
    
    #ifdef FLOAT_PRECISION
        cout << fixed;
        cout.precision(FLOAT_PRECISION);
    #endif
    
    init();
    
    int numTests = 1;
    #ifdef MULTI_TESTS
        cin >> numTests;
    #endif
    for (int testIdx = 1; testIdx <= numTests; testIdx++) {
        solve(testIdx);
    }
    
    return 0;
}