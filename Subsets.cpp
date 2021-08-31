class Solution {
public:
    vector<vector<int>>all_subsets;
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>empty;
        generate(empty,0,nums);
            return all_subsets;
    }
    
    void generate(vector<int>&subset,int n,vector<int>&nums){
  
       if(n==nums.size()){
           all_subsets.push_back(subset);
           return;
       }
       generate(subset , n+1 ,nums);
       //do
       subset.push_back(nums[n]);
       //recursion
       generate(subset,n+1,nums);
       //undo or backtracking
       subset.pop_back();
    }
};
