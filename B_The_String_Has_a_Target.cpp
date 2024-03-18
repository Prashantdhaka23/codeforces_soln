#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        // Find the smallest character in the string
        char smallest = s[0];
        int smallestIndex = 0;
        for(int i = 1; i < n; i++) {
            if(s[i] <= smallest) {
                smallest = s[i];
                smallestIndex = i;
            }
        }

        // Move the smallest character to the beginning of the string
        for(int i = smallestIndex; i > 0; i--) {
            s[i] = s[i-1];
        }
        s[0] = smallest;

        cout << s << endl;
    }
    return 0;
}
