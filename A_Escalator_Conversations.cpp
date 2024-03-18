#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int countConversations(int n, int m, int k, int VladHeight, vector<int>& personHeights) {
    queue<int> stepsQueue;
    stepsQueue.push(1);
    stepsQueue.push(2);

    int conversationCount = 0;
    for (int i = 0; i < n; i++) {
        int heightDifference = abs(VladHeight - personHeights[i]);
        bool isDifferentStep = stepsQueue.size() > 0;
        bool isHeightDifferenceDivisible = heightDifference % k == 0;
        bool isHeightDifferenceInRange = heightDifference <= (m - 1) * k;
        bool isHeightDifferenceNonZero = heightDifference > 0;

        if (isDifferentStep && isHeightDifferenceDivisible && isHeightDifferenceInRange && isHeightDifferenceNonZero) {
            conversationCount++;
        }
    }

    return conversationCount;
}

int main() {
    int t; // Number of test cases
    cin >> t;

    while (t--) {
        int n, m, k, VladHeight;
        cin >> n >> m >> k >> VladHeight;

        vector<int> personHeights(n);
        for (int i = 0; i < n; i++) {
            cin >> personHeights[i];
        }

        int result = countConversations(n, m, k, VladHeight, personHeights);
        cout << result << endl;
    }

    return 0;
}
