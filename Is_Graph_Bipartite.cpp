class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
         int n = graph.size();
    vector<int> col(n) ; //0 means uncoloured; 1 means col red ;-1 means colour blue 
    queue<int> q;  
	
    for (int i = 0; i < n; i++) {
      if (col[i]) continue;
      col[i] = 1; 
        q.push(i);
        while(!q.empty()){
        int cur = q.front();
        q.pop();
        for (auto neighbor : graph[cur]) 
		{
          if (!col[neighbor]) 
          { 
              col[neighbor] = -col[cur]; 
              q.push(neighbor); 
          } 
          else if (col[neighbor] == col[cur]) return false; 
        }        
      }
    }
    
    return true;
    }
};
