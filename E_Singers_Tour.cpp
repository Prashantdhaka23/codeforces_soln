#include<bits/stdc++.h>
using namespace std;

#define prashant ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve() {
    int ans = 0;
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        // ans=max(ans,v[i]);
    }
    int k;
    cin >> k;

    int low = 1;
    int high = 1e7;

    while (low <= high) {
        int mid = (low + high) / 2;
        int cnt = 0;
        int sum = 0;
        int ok=0;
        for (int i = 0; i < n; i++) {
            sum += v[i];

            if (sum > mid) {
                sum = v[i];
                cnt++;
            }
            if(v[i]>mid){
                // low=mid+1;
                ok=1;
                break;
            }
        }
        if(ok){
            // low=mid+1;
            continue;
        }
        if (sum > 0) {
            cnt++;
        }
        if (cnt > k) {
            low = mid + 1;
        }
        else if (cnt <= k) {
            ans = mid;
            high = mid - 1;
        }
    }
    cout << ans << endl;
}

int main() {
    prashant;
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
