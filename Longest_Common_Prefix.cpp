class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        sort(strs.begin(),strs.end());
        string srt=strs[0];
        string end=strs[strs.size()-1];
        
        for(int x=0;x<srt.size();x++){
             if(srt[x]==end[x]) ans.push_back(srt[x]);
             else break;
        }
        
        return ans;
    }
};
