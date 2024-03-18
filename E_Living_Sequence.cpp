#include <bits/stdc++.h>
using namespace std;

long long dp[20][20][2];

long long count_live_numbers(string n) {
    // Initialize the DP array
    memset(dp, 0, sizeof(dp));
    dp[0][0][0] = 1;
    // Compute the DP array
    for (int i = 1; i <= n.length(); i++) {
        for (int j = 1; j <= i; j++) {
            for (int d = 0; d < 10; d++) {
                if (d == 4) {
                    continue;
                }
                if (d < n[i-1]-'0') {
                    dp[i][j][1] += dp[i-1][j-1][1];
                } else if (d == n[i-1]-'0') {
                    dp[i][j][0] += dp[i-1][j][0];
                    dp[i][j][1] += dp[i-1][j-1][1];
                } else {
                    dp[i][j][0] += dp[i-1][j][0] + dp[i-1][j][1];
                    dp[i][j][1] += dp[i-1][j-1][1];
                }
            }
        }
    }
    // Compute the count of live numbers
    long long count = 0;
    for (int j = 1; j <= n.length(); j++) {
        count += dp[n.length()][j][0] + dp[n.length()][j][1];
    }
    cout<<count<<" ";
    return count;

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long k;
        cin >> k;
        long long res=0;
        // Binary search for the answer
        long long lo = 1, hi = 1e12;
        while (lo < hi) {
            long long mid = (lo + hi) / 2;
            if (count_live_numbers(to_string(mid)) < k) {
                lo = mid + 1;
            } else {
               res=mid;
                hi = mid;
            }
        }
        cout << res << "\n";
    }
    return 0;
}
