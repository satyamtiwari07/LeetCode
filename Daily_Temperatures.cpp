class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int>ans(temperatures.size());
        stack<int> st;
        for(int x=0;x<n;x++){
            while(!st.empty() and temperatures[x] > temperatures[st.top()]){
                ans[st.top()]=x-st.top(); 
                st.pop();
            }
            st.push(x);   
       }
        return ans;
    }
};

