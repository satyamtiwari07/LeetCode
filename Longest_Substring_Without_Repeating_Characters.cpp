class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int ans=0;
        unordered_map<char,int>mpp;
        int start=0;
        for(int x=0;x<s.size();x++){
           if(mpp.find(s[x])==mpp.end()){
               mpp[s[x]]=x;
           }   
            else{
               start=max(start,mpp[s[x]]+1); 
               mpp[s[x]]=x;
            }
            
            if(x-start+1>ans) ans=x-start+1;

        }
        return ans;        
    }
};
