class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int start, int end) {
        
        map<int,vector<int>> mpp;
        for(auto it: edges){
            int v=it[0];
            int e=it[1];
            mpp[v].push_back(e);
            mpp[e].push_back(v);
        }
        
        vector<bool>vis(n+1,false);
        
        queue<int>q;
        q.push(start);
        vis[start]=true;
        while(!q.empty()){
            int a=q.front();
            q.pop();
            
            for(auto it:mpp[a]){
                    if(!vis[it]){
                         q.push(it);
                         vis[it]=true;
                    }
            }
            if(vis[end]) return true;
        }
      
        return vis[end];
        
    }
};
