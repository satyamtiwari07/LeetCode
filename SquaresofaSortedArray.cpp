class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>ans(nums.size());
        int l=0,r=nums.size()-1;
        int pos=nums.size()-1;
        while(l!=r){
            if(abs(nums[l])<abs(nums[r])){
                ans[pos--]=nums[r]*nums[r];
                r--;
            }
            else{
                ans[pos--]=nums[l]*nums[l];
                l++;
            }
        }
         ans[0]=nums[r]*nums[r];
         return ans;
    }
};
