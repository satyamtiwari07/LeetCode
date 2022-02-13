class Solution {
public:
    void allsubsets(int start,vector<int>&v,int initial ,int &sum){
    if(start==v.size()){
         sum+=initial;
         return;
    }
    
    initial=initial^v[start];
    // e.push_back(v[start]);
    // sum+=initial;
    allsubsets(start+1,v,initial,sum);
     initial=initial^v[start];
    // e.pop_back();
    allsubsets(start+1,v,initial,sum);
    return;

   }
    int subsetXORSum(vector<int>& nums) {
        int initial=0;
  int ans=0;
  allsubsets(0,nums,initial,ans);
  return ans;
    }
};
