#include <iostream>
#include <vector>
#include <queue>
#include <bits/stdc++.h>

using namespace std;
int dfs(int node , unordered_map<int, vector<int>>  & graph ,vector<bool> & vis){
    vis[node]=true;
    int ans=0;
    for(auto it : graph[node]){
        if(vis[it]==false){
            ans+=1+dfs(it,graph,vis);
        }
    }
    return ans;

}

int min_transmissions(int n, int m, int t, vector<int>& nodes, vector<pair<int, int>>& transmissions) {
    unordered_map<int, vector<int>> graph;
    set<int> st,st2;
    for(auto it : nodes){
        st.insert(it);
    }

int ans=0;
    for (const auto& t : transmissions) {
        // graph[t.first].push_back(transmission.second);
    
        if(st.find(t.first)==st.end()  &&  st.find(t.second)!=st.end()){
            ans++;
            st2.insert(t.first);
        }

        if(st.find(t.first)!=st.end()  &&  st.find(t.second)==st.end()){
            ans++;
            st2.insert(t.second);

        }

      

    }
int d=n-st.size();
ans+=d-st2.size();
    
    return ans;
}

int main() {
    int n, m, t;
    cin >> n >> m >> t;
    int k;
    cin>>k;
    vector<int> nodes(k);

    for (int i = 0; i < k; ++i) {
        cin >> nodes[i];
    }
    vector<pair<int, int>> transmissions(m);
    for (int i = 0; i < m; ++i) {
        cin >> transmissions[i].first >> transmissions[i].second;
    }

    int result = min_transmissions(n, m, t, nodes, transmissions);

    cout << result << endl;

    return 0;
}
