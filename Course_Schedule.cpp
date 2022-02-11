class Solution {
public:
    bool cycle(int s , vector<bool>&vis , vector<bool>&dfsvis ,vector<int>graph[] ){
    vis[s]=true;
    dfsvis[s]=true;

    for(auto it:graph[s]){
         if(!vis[it]){
             if(cycle(it,vis,dfsvis,graph))
                 return true;
         }
         else if(vis[it]==true and dfsvis[it]==true) return true;
    }

    dfsvis[s]=0;
    return false;
    
}

bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {

    vector<bool>vis(numCourses,false),dfsvis(numCourses,false);
    vector<int>graph[numCourses];

    if(numCourses==1 || prerequisites.size()==1) return true;   
    
    for(auto it: prerequisites) graph[it[0]].push_back(it[1]);
    
    for(int x=0;x<numCourses;x++){
         if(!vis[x]) 
            if(cycle(x,vis,dfsvis,graph)){ 
                return false;
            }
    }

    return true;
}
};
