class Solution {
    void allcombinations(int idx , vector<int>&candidates , int target , vector<vector<int>>&ans ,vector<int>&ds)
    {
        if(idx==candidates.size()){
            if(target==0) 
              ans.push_back(ds);      
        return;
        }
        
        if(target>=candidates[idx]){
               ds.push_back(candidates[idx]);
               allcombinations(idx, candidates, target - candidates[idx] ,  ans, ds);
               ds.pop_back();
        }
      
        allcombinations(idx+1 , candidates , target , ans , ds);  

}
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int>ds;
        allcombinations(0,candidates,target,ans,ds);
        return ans;
    }
};
