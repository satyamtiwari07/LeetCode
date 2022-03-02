class Solution {
public:
    string removeDuplicates(string s, int k) {
        vector<pair<char,int>>st={{'S',0}};
        for(auto it:s){
        
        if(st.back().first == it) ++st.back().second;
		else st.push_back({it, 1});
		
		if(st.back().second == k) st.pop_back();
            
        }
        
        string str;
        for(auto it:st){
            str.append(it.second,it.first);
        }
        
        return str;
        
    }
};
