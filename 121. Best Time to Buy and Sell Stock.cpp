class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=INT_MAX;
        int p=0;
        int a=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<min){
                min=prices[i];
            }         
            p=prices[i]-min;
            if(a<p){
                a=p;
            }
        }
        return a;
    }
};
