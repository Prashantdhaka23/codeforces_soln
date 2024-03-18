#include <bits/stdc++.h>
#include <vector>

using namespace std;

int findMinimumGroups(int n, vector<int>& granites) {
    set<int> l;
    map<int,vector<int> > mp;

    for (int i = 0; i < n; ++i) {
        mp[granites[i]].push_back(i);
    }
    
    for (auto it : mp) {
        int a = it.first;
        const vector<int>& b = it.second;

        set<int> p;
        
        for (auto it : b) {
            auto it1 = l.upper_bound(it);
            if (it1 == l.end()) {
                p.insert(it);
            } else {
                // auto it2 = prev(it1);
                l.erase(it1);
                p.insert(it);

            }
        }

        for (auto it4 : p) {
            l.insert(it4);
        }
    }
   

    return l.size();
}

int main() {
    int n;
    cin >> n;

    vector<int> granites(n);
    for (int i = 0; i < n; ++i) {
        cin >> granites[i];
    }

    int result = findMinimumGroups(n, granites);
    cout << result << endl;

    return 0;
}
