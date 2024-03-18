#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int m, k, a1, a2;
        cin >> m >> k >> a1 >> a2;

        int y = min(m / k, a1); // Calculate the minimum of m/k and a1
        m -= y * k;
        int x = (m + a2 - 1) / a2; // Calculate x based on remaining cost

        int total_fancy_coins = x + y;
        cout << total_fancy_coins << endl;
    }

    return 0;
}
