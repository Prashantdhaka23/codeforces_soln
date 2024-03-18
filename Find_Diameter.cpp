#include <iostream>
#include <vector>
#include <map>

using namespace std;

const int MAX_N = 250;
const int MAX_M = 250;
const int MAX_K = 250;
map<int,vector<int>> mp,mp2;

vector<string> timetable;
int memo[MAX_N + 1][MAX_K + 1];

int minHours(int day, int skipped) {
    if (day == timetable.size()) {
        return 0;
    }
    if (memo[day][skipped] != -1) {
        return memo[day][skipped];
    }
    vector<int> v=mp[day];
    vector<int> v2=mp2[day];
    int s=v[v.size()-1];
    int result = 1e9;
    for (int i = 0; i < v2.size(); i++) {
        for (int j = v2.size()-1; j>=i; j--) {
            if (s - (v[v2[j] + 1] - v[v2[i]]) <= skipped) {
                result = min(result, v2[j] - v2[i] + 1 + minHours(day + 1, skipped - (s - (v[v2[j] + 1] - v[v2[i]]))));
            }else{
                break;
            }
        }
    }
    memo[day][skipped] = result;
    return result;
}

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    timetable.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> timetable[i];
    }
     

      
  for(int day=0;day<n;day++){
    vector<int> v,v2;
    v.push_back(0);
    int s = 0;

    for (int i = 0; i < m; i++) {
        if (timetable[day][i] == '1') {
            s++;
            v2.push_back(i);
        }
            v.push_back(s);
    }
    mp[day]=v;
    mp2[day]=v2;


  }
    

    // Initialize memoization table
    for (int i = 0; i <= n; i++) {
        for (int l = 0; l <= k; l++) {
            memo[i][l] = -1;
        }
    }

    int result = minHours(0, k);
    cout << result << endl;

    return 0;
}
