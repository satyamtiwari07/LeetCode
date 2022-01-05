class Solution {
public:
      void allcombination(int idx , int n , int k, vector<int>&ds ,vector<vector<int>>&ans){
      if(ds.size()==k){
         ans.push_back(ds);
         return;
      }

      if(idx>n) return;

      ds.push_back(idx);
      allcombination(idx+1, n , k, ds,ans);

      ds.pop_back();
      allcombination(idx+1, n , k, ds,ans);
    }

    vector<vector<int>> combine(int n, int k) {
       vector<int>ds;
       vector<vector<int>>ans;
       allcombination(1,n,k,ds,ans);
       return ans;     
    }
};
