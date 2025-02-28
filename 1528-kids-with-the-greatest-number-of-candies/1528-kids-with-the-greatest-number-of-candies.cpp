class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> vec;
        int maxi = *max_element(candies.begin(),candies.end());
        for(int x: candies)
        {
            if(x+ extraCandies >=maxi )
            {
              vec.push_back(true);
            }
            else
            {
                vec.push_back(false);
            }
        }
        return vec;
        
    }
};