class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minp = INT_MAX;
        int ans = 0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<minp){
                minp = prices[i];
            }
            else if(prices[i]-minp>ans){
                ans = prices[i]-minp;
            }
        }
        return ans;
    }
};
