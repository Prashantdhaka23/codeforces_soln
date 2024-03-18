#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;

int n, k;
vector<int> adj[N];
int sz[N];
bool vis[N];

// DFS to calculate subtree size
void dfs(int u, int p) {
    sz[u] = 1;
    for (int v : adj[u]) {
        if (v != p && !vis[v]) {
            dfs(v, u);
            sz[u] += sz[v];
        }
    }
}

// DFS to find centroids and calculate answer for current k
void dfs_centroid(int u, int p, int tot_size, int& centroid, int& ans) {
    int max_subtree = tot_size - sz[u];
    for (int v : adj[u]) {
        if (v != p && !vis[v]) {
            dfs_centroid(v, u, tot_size, centroid, ans);
            max_subtree = max(max_subtree, sz[v]);
        }
    }
    if (max_subtree <= tot_size/2 && centroid == -1) {
        centroid = u;
    }
    if (tot_size - sz[u] <= k) {
        ans++;
    }
}

// Function to calculate answer for current k
int solve(int u) {
    dfs(u, -1);
    int centroid = -1, ans = 0;
    dfs_centroid(u, -1, sz[u], centroid, ans);
    vis[centroid] = true;
    for (int v : adj[centroid]) {
        if (!vis[v]) {
            ans += solve(v);
        }
    }
    vis[centroid] = false;
    return ans;
}

int main() {
    cin >> n;
    for (int i = 1; i < n; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for (k = 1; k <= n; k++) {
        cout << solve(1) << " ";
    }
    cout << endl;
    return 0;
}
