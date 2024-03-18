class Solution {
public:
    
    int dfs(int node ,int par ,  vector<vector<pair<int,int> >> & adj ,int cnt ,int s){
        int ans=0;
      
        if(cnt%s==0)ans++;
        for(auto it : adj[node]){
            
            if(it.first!=par){
                ans+=dfs(it.first,node,adj,cnt+it.second,s);
            }
        }
        return ans;
    }
    vector<int> countPairsOfConnectableServers(vector<vector<int>>& e, int s) {
        
      vector<vector<pair<int,int> >>  adj(e.size()+3);
        
        for(int i=0;i<e.size();i++){
            adj[e[i][0]].push_back({e[i][1],e[i][2]});
            adj[e[i][1]].push_back({e[i][0],e[i][2]});
        }
        
        vector<int> v;
        
        for(int i=0;i<=e.size();i++){
             
            vector<int> b;
            for(auto it : adj[i]){
           int a= dfs(it.first,i,adj,it.second,s);
                b.push_back(a);
                
                }
            int f=0;
            for(int j=0;j<b.size();j++){
                for(int k=j+1;k<b.size();k++){
                 f+=b[j]*b[k];   
            }
            }
            v.push_back(f);
        }
        return v;
    }
};





}