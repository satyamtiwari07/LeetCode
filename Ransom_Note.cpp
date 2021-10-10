class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int arr1[26]={0} ;
        for(auto it : magazine){
             arr1[it-'a']++;
        }
        
        for(auto it : ransomNote){
             arr1[it-'a']--;
             if(arr1[it-'a']<0) return false;
        }
        
        return true;
    }
};
