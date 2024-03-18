#include<bits/stdc++.h>
using namespace std;

vector<int> adj[300005];
bool visited[300005];
vector<int> order;

void dfs(int v) {
    visited[v] = true;
    order.push_back(v);
    for (int u : adj[v]) {
        if (!visited[u])
            dfs(u);
    }
}

int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    int N;
    cin >> N;
    int start;
    for(int i = 1; i <= N; i++) {
        int Ai;
        cin >> Ai;
        if(Ai == -1) {
            start = i;
        } else {
            adj[Ai].push_back(i);
        }
    }
    dfs(start);
    for(int i : order) {
        cout << i << " ";
    }
    return 0;
}