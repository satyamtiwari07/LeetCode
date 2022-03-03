class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int>ans(nums.size(),-1);
        stack<int> st;
        
        int n=nums.size();
        for(int x=0 ; x<n ; x++){
            while(!st.empty() and nums[st.top()]<nums[x]){
                ans[st.top()] = nums[x];
                st.pop();
            }
            st.push(x);
        }
        
        for(int x=0;x<nums.size();x++){
              while(!st.empty() and nums[st.top()]<nums[x]){
                ans[st.top()] = nums[x];
                st.pop();
            }
        }
        
        // while(!st.empty())
        // {
        //     ans[st.top()]=-1;
        //     st.pop();
        // }
        
        return ans;
        
    }
};
