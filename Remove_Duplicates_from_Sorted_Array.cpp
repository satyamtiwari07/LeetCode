class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int pos=1;
        if(nums.size()==0) return 0;
        for(int x=0;x<nums.size()-1;x++){
           if(nums[x]!=nums[x+1]){
               nums[pos]=nums[x+1];
                   pos++;
           }
        }
        return pos;
    }
};
