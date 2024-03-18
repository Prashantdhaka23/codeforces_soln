#include<bits/stdc++.h>
#include <limits.h>
#include <queue>
using namespace std;

#define V 6  // Number of vertices in the graph

bool bfs(int rGraph[V][V], int s, int t, int parent[]) {
    bool visited[V];
    memset(visited, 0, sizeof(visited));

    queue<int> q;
    q.push(s);
    visited[s] = true;
    parent[s] = -1;

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (int v = 0; v < V; v++) {
            if (visited[v] == false && rGraph[u][v] > 0) {
                q.push(v);
                parent[v] = u;
                visited[v] = true;
            }
        }
    }

    return (visited[t] == true);
}

int fordFulkerson(int graph[V][V], int s, int t) {
    int rGraph[V][V]; // Residual graph
    for (int u = 0; u < V; u++)
        for (int v = 0; v < V; v++)
             rGraph[u][v] = graph[u][v];

    int parent[V];
    int max_flow = 0;

    while (bfs(rGraph, s, t, parent)) {
        int path_flow = INT_MAX;
        for (int v = t; v != s; v = parent[v]) {
            int u = parent[v];
            path_flow = min(path_flow, rGraph[u][v]);
        }

        for (int v = t; v != s; v = parent[v]) {
            int u = parent[v];
            rGraph[u][v] -= path_flow;
            rGraph[v][u] += path_flow;
        }

        max_flow += path_flow;
    }

    return max_flow;
}

int main() {
    int graph[V][V] = {
        {0, 15, 11, 0, 0, 0},
        {0, 0, 8, 0, 0, 9},
        {0, 10, 0, 9, 0, 0},
        {0, 15, 0, 0, 8, 11},
        {0, 0, 0, 0, 0, 10},
        {0, 0, 0, 0, 0, 0}
    };

    int source = 0; // Index of the source node
    int sink = 5;   // Index of the sink node

    cout << "Maximum flow in this network is: " << fordFulkerson(graph, source, sink) << endl;

    return 0;
}
