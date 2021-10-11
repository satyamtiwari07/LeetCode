class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2){
        vector<int> ans(nums1.size());

        stack<int>st;
        unordered_map<int,int>mpp;

        for(int x=0;x<nums2.size();x++){
           while(!st.empty() && nums2[x] > nums2[st.top()]){
               mpp[nums2[st.top()]]=nums2[x];
               st.pop();
           }
           st.push(x);
        } 

        while(!st.empty()){
             mpp[nums2[st.top()]]=-1;
             st.pop();
        }

        for(int x=0 ; x<nums1.size() ; x++){
            auto it=mpp.find(nums1[x]);
            ans[x]=it->second;
        }

        return ans;
    }
};
