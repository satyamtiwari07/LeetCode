class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s;
        for(int x=0;x<nums.size();x++){
            if(s.find(nums[x])==s.end()){
                 s.insert(nums[x]);
            }
            else{
                 return true;
            }
        }
        return false;
    }
};
