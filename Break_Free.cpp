#include <bits/stdc++.h>
using namespace std;

#define int long long
#define prashant ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve() {
    int ans = 0;
    vector<int> ar;
    string res = "YES";
    int k;
    cin >> k;
    int a, b;
    cin >> a >> b;
    set<int> s;
    int j = a;
    for (int i = 0; i < b; i++) {
        s.insert(j);
        j++;
    }
    int c, d;
    cin >> c >> d;
    vector<pair<int,int>> v;
    int l;
    j = c;
    for (int i = 0; i < d; i++) {
        cin >> l;
        v.push_back({l,j});
        j++;
    }
    sort(v.begin(), v.end(), greater<int>());
    for (int i = 0; i < v.size(); i++) {
        int x = v[j].second - k;
        int ok = 0;
        if (v[i].first > 0) {
            auto it = lower_bound(s.begin(), s.end(), x);
            if (it != s.end()) {
                s.erase(it);
                ok = 1;
            }
        }
        if (ok == 0)
            ans += v[i].first;
    }
    cout << ans << endl;
}

int32_t main() {
    prashant;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
