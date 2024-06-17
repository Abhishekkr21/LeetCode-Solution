class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n= prices.size();
        int m = 0, p=0;
        int b= prices[0];
        for(int i=0;i<n;i++)
        {
            if(prices[i]<b)
            {
                b= prices[i];
            }
            else
            {
                p= prices[i]-b;
                b = prices[i];
                m+=p;
            }
        }
        return m;
    }
};