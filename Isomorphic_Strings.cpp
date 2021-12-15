class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> mpp1,mpp2;
        
        int n=s.size();
        
        for(int x=0;x<n;x++){
            
            if(mpp1.find(s[x])==mpp1.end() && mpp2.find(t[x])==mpp2.end()){
                 mpp1[s[x]]=t[x];
                 mpp2[t[x]]=s[x];
            }
            else {
                char val1=mpp1[s[x]];
                char val2=mpp2[t[x]];
                if(val1==t[x] && val2==s[x]) continue;
                else return false;
            }
        }
        return true;
    }
};
