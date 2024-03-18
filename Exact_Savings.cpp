#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 1e9+7;

ll dp[101][1001];

ll go(int i, ll prev, int n, vector<ll> &s, vector<vector<ll>> &adj) {
    if(i >= n) return 1;
    if(dp[i][prev] != -1) return dp[i][prev];
    vector<ll> curr = adj[s[i]];
    ll ans = 0;
    int idx = upper_bound(curr.begin(), curr.end(), prev) - curr.begin();
    for(int j = idx; j < curr.size(); j ++) {
        ans = (ans + go(i + 1, curr[j], n, s, adj)) % MOD;
    }
    return dp[i][prev] = ans % MOD;
}

int main(){
    ll n;
    cin >> n;
    vector<ll> s(n);
    for(int i = 0; i < n; i ++) cin >> s[i];
    vector<vector<ll>> adj(31);
    for(int i = 1; i <= 1000; i ++) {
        int x = i;
        int total = 0;
        while(x > 0) {
            total += (x % 10);
            x = x/10;
        }
        if(total >= 31) continue;
        adj[total].push_back(i);
    }
    ll prev = 0;
    memset(dp, -1, sizeof(dp));
    cout << go(0, prev, n, s, adj) << endl;
    return 0;
}