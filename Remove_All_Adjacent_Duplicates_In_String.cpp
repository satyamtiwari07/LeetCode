class Solution {
public:
    string removeDuplicates(string s) {
        int n=s.size();
        stack<char> st;
        for(auto it:s){
             if(st.empty()) st.push(it);
             else if(st.top()==it) st.pop();
             else st.push(it);
        }
        
        string str="";
        while(!st.empty()){
            char a=st.top();
            st.pop();
            str+=a;
        }
       
        reverse(str.begin(),str.end());
        return str;
    }
};
