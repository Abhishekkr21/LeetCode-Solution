class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
          int n = matrix.size();
        priority_queue<tuple<int,int,int>, vector<tuple<int,int,int>>, greater<>> minH;

        for(int i = 0; i < n; ++i) {
            minH.emplace(matrix[i][0], i, 0);
        }

        int result = 0;
        while(k--) {
            auto [val, r, c] = minH.top(); minH.pop();
            result = val;
            if(c + 1 < n) {
                minH.emplace(matrix[r][c+1], r, c+1);
            }
        }
        return result;
        
    }
};