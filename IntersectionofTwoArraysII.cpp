class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mpp;
        vector<int>ans;
        for(auto &it:nums1)
             mpp[it]++;

        for(int x=0;x<nums2.size();x++){
            if(mpp.find(nums2[x])!=mpp.end() && mpp[nums2[x]]>0){
                ans.push_back(nums2[x]);
                --mpp[nums2[x]];
            }
        }
        return ans;
    }
};
