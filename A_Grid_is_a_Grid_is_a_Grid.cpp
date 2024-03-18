#include <iostream>
#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

long long sumRootToLeafPaths(TreeNode* root, long long pathSum) {
    if (!root) {
        return 0;
    }

    pathSum = pathSum * 10 + root->val;

    if (!root->left && !root->right) {
        return pathSum;
    }

    long long leftSum = sumRootToLeafPaths(root->left, pathSum);
    long long rightSum = sumRootToLeafPaths(root->right, pathSum);

    return leftSum + rightSum;
}

int main() {
    int n;
    cin >> n;

    vector<int> values(n);
    for (int i = 0; i < n; ++i) {
        cin >> values[i];
    }

    vector<TreeNode*> nodes(n, nullptr);
    for(int i=0;i<n;i++){
        nodes[i] = new TreeNode(values[i]);

    }
    for (int i = 0; i < n; ++i) {
        int left, right;
        cin >> left >> right;
        if (left != -1) {
            nodes[i]->left = nodes[left];
        }
        if (right != -1) {
            nodes[i]->right = nodes[right];
        }
    }

    TreeNode* root = nodes[0];

    long long result = sumRootToLeafPaths(root, 0LL);
    cout << result << endl;

    return 0;
}
