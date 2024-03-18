#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void checkOrderValidity() {
    int numTests;
    cin >> numTests;

    while (numTests--) {
        int size;
        cin >> size;
        int m=1;

        vector<int> orderA(size), orderB(size), priorityC(size), priorityD(size);
        map<int, int> countPriorityD;

        for (int i = 0; i < size; ++i) cin >> orderA[i];
        for (int i = 0; i < size; ++i) cin >> orderB[i];
        for (int i = 0; i < size; ++i) cin >> priorityC[i];
        for (int i = 0; i < size; ++i) {
            cin >> priorityD[i];
            countPriorityD[priorityD[i]]++;
        }

        map<int, priority_queue<int, vector<int>, greater<int>>> priorityMap;

        for (int i = 0; i < size; ++i) {
            if (countPriorityD.find(orderB[i]) != countPriorityD.end()) {
                priorityMap[orderB[i]].push(orderA[i]);
                orderA[i] = -2;
            }
            priorityMap[priorityD[i]].push(priorityC[i]);
        }

        int prev = -1;
        for (int i = 0; i < size; ++i) {
            if (orderA[i] != -2) {
                if (orderA[i] >= prev) {
                    prev = orderA[i];
                } else {
                    cout << "No" << endl;
                     m=0;
                   break;
                }
            } else {
                int found = 1;
                while (!priorityMap[orderB[i]].empty()) {
                    int x = priorityMap[orderB[i]].top();
                    priorityMap[orderB[i]].pop();
                    if (x >= prev) {
                        prev = x;
                        found = 0;
                        break;
                    }
                }
                if (found) {
                    cout << "No" << endl;
                   m=0;
                   break;
                }
            }
        }
        if(m)
        cout << "Yes" << endl;
    }
}

int main() {
    FASTIO;
    checkOrderValidity();
    return 0;
}
