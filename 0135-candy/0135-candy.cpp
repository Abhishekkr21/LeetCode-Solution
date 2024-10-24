class Solution {
public:
    int candy(vector<int>& ratings) {
        int N = ratings.size();
        vector<int> results(N, 1);  // Initialize each child with 1 candy

        // Left to right pass
        for (int index = 1; index < N; ++index) {
            if (ratings[index] > ratings[index - 1]) {
                results[index] = results[index - 1] + 1;
            }
        }

        // Right to left pass
        for (int index = N - 2; index >= 0; --index) {
            if (ratings[index] > ratings[index + 1]) {
                results[index] = max(results[index], results[index + 1] + 1);
            }
        }

        // Return total candies needed
        int totalCandies = 0;
        for (int candies : results) {
            totalCandies += candies;
        }
        return totalCandies;
        
    }
};