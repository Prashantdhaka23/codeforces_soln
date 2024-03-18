#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

struct Node {
    int weight;
    vector<Node*> children;
    Node(int w) : weight(w) {}
};

void dfs(Node* node, unordered_map<int, Node*>& xor_values) {
    if (node->children.size() == 0) {
        xor_values[node->weight] = node;
        return;
    }
    for (Node* child : node->children) {
        dfs(child, xor_values);
        for (auto& it : xor_values) {
            int xor_val = it.first ^ child->weight ^ node->weight;
            if (xor_values.count(xor_val)) {
                Node* node1 = xor_values[xor_val];
                Node* node2 = node1->weight == child->weight ? node1->children[0] : node1;
                if (node1 != node2 && node2 != child && node2 != node) {
                    cout << node->weight << " " << child->weight << " " << node2->weight << " " << node1->weight << endl;
                    return;
                }
            }
        }
    }
    xor_values[node->weight] = node;
}

int main() {
    int n;
    cin >> n;
    vector<Node*> nodes(n);
    for (int i = 0; i < n; i++) {
        int w;
        cin >> w;
        nodes[i] = new Node(w);
    }
    for (int i = 0; i < n-1; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        nodes[u-1]->children.push_back(nodes[v-1]);
        nodes[v-1]->children.push_back(nodes[u-1]);
    }
    unordered_map<int, Node*> xor_values;
    dfs(nodes[0], xor_values);
    cout << "-1" << endl;
    return 0;
}
