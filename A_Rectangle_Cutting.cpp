#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

vector<string> fun(vector<string> &v) {
    vector<string> ans;
    map<string, int> mp;

    for (int i = 0; i < v.size(); i++) {
        string s = v[i];

        string p = "";
        string t = "";

        // Splitting the string based on space
        for (int j = 0; j < s.size(); j++) {
            if (s[j] == ' ') {
                t = s.substr(j + 1);
                break;
            } else {
                p += s[j];
            }
        }

        int x = mp[t];
        mp[t]++;

        // Checking conditions based on the value of x
        if (x == 0) {
            if (p == "register") ans.push_back("Registered Successfully");
            else ans.push_back("Registered Unsuccessful");
        } else if (x == 1) {
            if (p == "login") ans.push_back("Logged IN Successfully");
            else ans.push_back("Login Unsuccessful");
        } else if (x == 2) {
            if (p == "logout") ans.push_back("Logged Out Successfully");
            else ans.push_back("Logout Unsuccessful");
        }
    }

    return ans;
}

int main() {
    // Example usage
   int n;
   cin>>n;
     vector<string> input;
    string line;
    for (int i = 0; i < n; ++i) {
        getline(cin, line);
        input.push_back(line);
    }
    vector<string> result = fun(input);
    for (const auto& res : result) {
        cout << res << endl;
    }

    return 0;
}
