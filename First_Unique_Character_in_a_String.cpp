class Solution {
public:
    int firstUniqChar(string s) {
      int a[26]={0};
        
        for(int x=0;x<s.size();x++){
             int val=s[x]-'a';
             a[val]++;
        }
        
        for(int x=0;x<s.size();x++){
             int val=s[x]-'a';
             if(a[val]==1) return x;
        }
        return -1;
    }
};
