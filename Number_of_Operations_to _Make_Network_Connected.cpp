class Solution {
public:
    
    void dfs(int x,vector<int>adj[],vector<bool>&vis){
          if(vis[x]) return ;
        vis[x]=true;
        for(auto it:adj[x]) dfs(it,adj,vis);
    }
    
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(connections.size()<n-1) return -1;
        
        int count=0;
        vector<int>adj[n];
        for(auto it:connections){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        
        vector<bool>vis(n,false);
        
        for(int x=0;x<n;x++){
             if(!vis[x]){
                 count++;
                  dfs(x,adj,vis);
             }
        }
        
        return count-1;
    }
};
