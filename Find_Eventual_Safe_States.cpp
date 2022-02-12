class Solution {
public:
    bool dfscycle(int s,vector<bool>&vis,vector<bool>&dfsvis,vector<vector<int>>&graph,vector<bool>&cycle){
        vis[s]=true;
        dfsvis[s]=true;

        for(auto it:graph[s]){
                 if(!vis[it]){
                     if(dfscycle(it,vis,dfsvis,graph,cycle)){
                          cycle[s]=true;
                         return true;
                     }
                 }
                 else if(vis[it]==true and dfsvis[it]==true){
                  cycle[s]=true;   
                  return true; 
                 }
           }
        

        dfsvis[s]=0;
        
        return false;
    }
    
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n=graph.size();
     vector<bool>vis(n,false),dfsvis(n,false),cycle(n,false);
        vector<int>ans;
        
        for(int x=0;x<n;x++){
             if(!vis[x]){
                  dfscycle(x,vis,dfsvis,graph,cycle);
             }
        }
        for(int x=0;x<n;x++)
             if(cycle[x]==false) ans.push_back(x);
        
        return ans;
    }
};
