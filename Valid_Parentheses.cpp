class Solution {
public:
    bool isValid(string s) {
        stack<char>st;

      for(int x=0 ; x<s.size() ; x++){
         if(s[x]=='(' || s[x]=='[' || s[x]=='{'){
            st.push(s[x]);
         }
         else{
            if(st.empty()) return false;
            char ch=st.top();
            if(ch=='{' and s[x]!='}') return false;
            else if(ch=='[' and s[x]!=']') return false;
            else if(ch=='(' and s[x]!=')') return false;
             st.pop();

             }
       }

      return st.empty();
    }
};
