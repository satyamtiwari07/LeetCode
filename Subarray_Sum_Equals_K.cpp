class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum=0;
        unordered_map<int,int>mpp;
        mpp[0]=1;
        int count=0;
        for(auto it:nums){
            sum+=it;
            
            if(mpp.find(sum-k)!=mpp.end())
                count+=mpp[sum-k];
            
            mpp[sum]++;
            
        }
        
        // for(auto it: mpp) cout<<it.first<<" "<<it.second<<" ";
        return count;
    }
};
