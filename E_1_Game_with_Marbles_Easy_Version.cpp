#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int dfs(int i, int j, vector<int> &nums, int p, unordered_map<string, int> &memo) {
    if (j - i < 1) {
        return 0;
    }

    string key = to_string(i) + "-" + to_string(j) + "-" + to_string(p);
    if (memo.find(key) != memo.end()) {
        return memo[key];
    }

    int s = nums[i] + nums[j];
    int ans = 0;

    if (p == -1 || s == p) {
        ans = max(ans, 1 + dfs(i + 1, j - 1, nums, s, memo));
    }

    s = nums[i] + nums[i + 1];
    if (p == -1 || s == p) {
        ans = max(ans, 1 + dfs(i + 2, j, nums, s, memo));
    }

    s = nums[j] + nums[j - 1];
    if (p == -1 || s == p) {
        ans = max(ans, 1 + dfs(i, j - 2, nums, s, memo));
    }

    memo[key] = ans;
    return ans;
}

int Sol(vector<int> &nums) {
    unordered_map<string, int> memo;
    return dfs(0, nums.size() - 1, nums, -1, memo);
}

int main() {
    vector<int> nums = { 4,1,4,3,3,2,5,2 };
    int result = Sol(nums);
    cout << "Maximum length of subsequence: " << result << endl;
    return 0;
}
