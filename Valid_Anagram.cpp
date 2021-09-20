class Solution {
public:
    bool isAnagram(string s, string t) {
       unordered_map<char,int> s1,s2;

      for(auto it:s){
         s1[it]++;
      }
      for(auto it:t){
         s2[it]++;
      }

      return s1==s2;
    }
};
