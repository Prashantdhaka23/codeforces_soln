#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

class Graph {
private:
    int V; // Number of vertices
    vector<vector<pair<int, int>>> adj; // Adjacency list

public:
    Graph(int vertices) {
        V = vertices;
        adj.resize(V);
    }

    // Add an edge to the graph with capacity
    void addEdge(int u, int v, int capacity) {
        adj[u].push_back({v, capacity});
        adj[v].push_back({u, 0}); // Add reverse edge with capacity 0
    }

    // Depth-First Search (DFS)
    int dfs(int s, int t, vector<int>& parent) {
        vector<bool> visited(V, false);
        queue<pair<int, int>> q;
        q.push({s, INT_MAX});
        visited[s] = true;

        while (!q.empty()) {
            int u = q.front().first;
            int min_capacity = q.front().second;
            q.pop();

            for (auto& edge : adj[u]) {
                int v = edge.first;
                int capacity = edge.second;

                if (!visited[v] && capacity > 0) {
                    int new_flow = min(min_capacity, capacity);
                    parent[v] = u;

                    if (v == t)
                        return new_flow;

                    q.push({v, new_flow});
                    visited[v] = true;
                }
            }
        }

        return 0;
    }

    // Ford-Fulkerson algorithm to find max flow
    int maxFlow(int source, int sink) {
        vector<int> parent(V, -1);
        int max_flow = 0;
        int new_flow;

        while ((new_flow = dfs(source, sink, parent)) > 0) {
            max_flow += new_flow;
            int v = sink;

            while (v != source) {
                int u = parent[v];
                for (auto& edge : adj[u]) {
                    if (edge.first == v) {
                        edge.second -= new_flow;
                        break;
                    }
                }

                bool found = false;
                for (auto& edge : adj[v]) {
                    if (edge.first == u) {
                        edge.second += new_flow;
                        found = true;
                        break;
                    }
                }

                if (!found) {
                    adj[v].push_back({u, new_flow});
                }

                v = u;
            }
        }

        return max_flow;
    }
};

int main() {
    int V = 6;
    Graph graph(V);
    // s a 2, s b 2,b a 1,b c 1,b d 1,a c 2,c t 1,d t 3
    graph.addEdge(0, 1, 2);
    graph.addEdge(0, 2, 2);
    graph.addEdge(2, 1, 1);
    graph.addEdge(2, 3, 1);
    graph.addEdge(2, 4, 1);
    graph.addEdge(1, 3, 2);
    graph.addEdge(3, 5, 1);
    graph.addEdge(4, 5, 3);


    int source = 0;
    int sink = 3;

    int max_flow = graph.maxFlow(source, sink);
    cout << "Maximum Flow: " << max_flow << endl;

    cout << "Bottleneck Edges: " << endl;
    for (int u = 0; u < V; ++u) {
        for (auto& edge : graph.adj[u]) {
            int v = edge.first;
            int capacity = edge.second;
            if (capacity == 0) {
                cout << "(" << u << " -> " << v << ") ";
            }
        }
    }
    cout << endl;

    return 0;
}
