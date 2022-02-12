class Solution {
public:
    
    bool dfsrec(int p,int s, stack<int>&st,vector<bool>&vis,vector<bool>&dfsvis ,vector<int>graph[])
    {
      vis[s]=true;
        dfsvis[s]=true;
        for(auto it:graph[s]){
             if(!vis[it]){
                  if(dfsrec(s,it,st,vis,dfsvis,graph))
                    return true;
             }
            else if(dfsvis[it] && vis[it]) return true;
                        
        }
        dfsvis[s]=false;
        st.push(s);
        return false;
    }
    
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>graph[numCourses];
        for(int x=0 ; x<prerequisites.size() ; x++){
             graph[prerequisites[x][1]].push_back(prerequisites[x][0]);
        }
        
        vector<int>ans;
        stack<int>st;
        vector<bool> vis(numCourses,false),dfsvis(numCourses,false);
        int a=false;
        for(int x=0 ; x<numCourses ; x++){
             if(!vis[x])
                  a=a|dfsrec(-1,x,st,vis,dfsvis,graph);
        }
        if(a==true)
             return ans;
        else{
        while(!st.empty()){
             int val=st.top();
             ans.push_back(val);
             st.pop();
        }
        }
        return ans;
    }
};
