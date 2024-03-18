#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

bool checkSubsegment(vector<int>& prefixSum, int k) {
    unordered_map<int, int> countMap;

    for (int i : prefixSum) {
        if (countMap.find(i - k) != countMap.end()) {
            return true;
        }
        countMap[i]++;
    }

    return false;
}

void solveMetroProblem() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> prefixSum(n + 1, 0);

        for (int i = 1; i <= n; i++) {
            char event;
            cin >> event;

            if (event == '+') {
                int v, x;
                cin >> v >> x;
                prefixSum[i] = prefixSum[v] + x;
            }
            else if (event == '?') {
                int u, v, k;
                cin >> u >> v >> k;

                if (u != 1) {
                    cout << "No" << endl;
                    continue;
                }

                if (checkSubsegment(prefixSum, k)) {
                    cout << "Yes" << endl;
                }
                else {
                    cout << "No" << endl;
                }
            }
        }
    }
}

int main() {
    solveMetroProblem();
    return 0;
}
