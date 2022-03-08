class Solution {
public:
    string reverseWords(string s) {
        
        int left=0,right=s.size()-1;
        
        string ans="",temp="";
        
        while(left<=right){
            
            // cout<<ans<<' '<<temp<<endl;
            char ch=s[left];
            if(ch!=' '){
                temp+=ch;
            }
            else if(ch==' '){
                if(temp=="") {left++ ; continue; }
                if(ans=="") ans=temp;
                else ans = temp+" "+ans; 
                temp="";
            }
            left++;
        }
        // cout<<temp;
        if(temp!=""){
            if(ans=="") ans=temp;
             else   ans = temp+" "+ans;
        }
        
        return ans;
    }
};
