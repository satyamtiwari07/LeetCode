class Solution {
public:
    void reverseString(vector<char>& s) {
            if(s.size()==1){
           return;
       }  
       char temp=s[0];
       s.erase(s.begin()+0);
       reverseString(s);
       s.push_back(temp);
    }
};
