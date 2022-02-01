class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cp = 0, op = 0;
        int buy = prices[0];
        int sell = prices[0];
        
        for(int i=1; i<prices.size(); i++){
            if(prices[i] < buy){
                buy = prices[i];
            }else{
                sell = prices[i];
                cp = sell-buy;
                op = max(cp, op);
            }
        }
        return op;
    }
};
