class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cur_min=INT_MAX,profit=0;
        for(int x=0 ; x<prices.size() ; x++){
             cur_min = min(cur_min , prices[x]);
             profit = max( profit , prices[x]-cur_min);
        }
        return profit;
    }
};
