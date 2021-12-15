class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        // time complexity--> 0n 
        // unordered_map<int,int> mpp;
        // for(auto it: edges){
        //     mpp[it[0]]++;
        //     mpp[it[1]]++;
        // }
        // int n=mpp.size();
        // int val=0;
        // for(auto it:mpp){
        //      if(it.second==n-1) val=it.first;
        // }
        // return val;
        

        if(edges[0][0]==edges[1][0] || edges[0][0]==edges[1][1])
            return edges[0][0];
        else 
            return edges[0][1];
        
        return 0;
    }
};
