class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int j=0;
        for(int x=0;x<n;x++){
            if(nums[x]!=0){
                swap(nums[x],nums[j]);
                j++;
            }
        }
        // return nums;
    }
};
