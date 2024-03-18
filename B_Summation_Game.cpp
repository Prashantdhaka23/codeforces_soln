#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    unordered_map<int, pair<int, int>> mp;

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        if(mp.find(arr[i]) == mp.end()) {
           mp[arr[i]] = {i, i};
        }else{
           mp[arr[i]].second = i;
        }
    }

    for ( int i=0;i<n;i++) {
    int d = mp[arr[i]].second - mp[arr[i]].first;
    cout << d <<" ";
    }
    cout<<endl;
    return 0;
}