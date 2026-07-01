class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int maxprofit=0;
        int n=prices.size();
        
        for (int i=0;i<n-1;i++){
            for (int j=i+1;j<n;j++){
                if(prices[i]<prices[j]){
                    profit=prices[j]-prices[i];
                    maxprofit=max(maxprofit,profit);
                }
            }
        }
        return maxprofit;
    }
};
