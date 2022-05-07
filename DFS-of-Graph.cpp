class Solution {
  public:
  
    vector<int>v;
    
    void dfs(int s,vector<int>adj[],bool* vis){
        vis[s]=true;
        v.push_back(s);
        for(int i=0;i<adj[s].size();i++){
            if(vis[adj[s][i]]==false){
                dfs(adj[s][i],adj,vis);
            }
        }
    }
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        bool vis[V];
        memset(vis,false,sizeof(vis));
        dfs(0,adj,vis);
        return v;
    }
};
