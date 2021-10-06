class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currmax=nums[0];
        int maxsofar=nums[0];
        
        for(int x=1;x<nums.size();x++){
            currmax=max(nums[x],currmax+nums[x]);
            maxsofar=max(maxsofar,currmax);
        }
        return maxsofar;
    }
};
