#include<bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--){
    int n;
    cin >> n;
    vector<int> v(n);
    set<int> s;

    // Read the input and insert into the set
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        s.insert(v[i]);
    }

    // Copy the unique sorted elements into a vector
    vector<int> p(s.begin(), s.end());

    int ans = 1;
    for(int i = 0; i < p.size(); i++) {
        // Find the first element that is greater than p[i] + n - 1
        int a = upper_bound(p.begin(), p.end(), p[i] + n - 1) - p.begin();

        // Update ans with the maximum number of elements within n of each other
        ans = max(ans, a - i);
    }

    cout << ans << endl;
    }

    return 0;
}