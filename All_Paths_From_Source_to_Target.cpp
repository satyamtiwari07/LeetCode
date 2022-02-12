class Solution {
public:
    void possible_paths(int s,int n,vector<int>&path,vector<vector<int>>&ans,vector<vector<int>>&graph){
        
        path.push_back(s);
        if(s==n){
             
             ans.push_back(path);
             return;
        }
        for(auto it:graph[s]){
             possible_paths(it,n,path,ans,graph);
             path.pop_back();
        }
        return;
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n=graph.size();
        
        vector<vector<int>>ans;
        vector<int>path;
        possible_paths(0,n-1,path,ans,graph);
        
        return ans;
        
        
    }
};
