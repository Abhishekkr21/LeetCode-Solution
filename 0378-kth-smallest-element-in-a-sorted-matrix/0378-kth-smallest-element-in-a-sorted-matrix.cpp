class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
         vector<int> v;
        for(int i=0;i<matrix.size();i++)
        {
            for(auto x: matrix[i])
            {
                v.push_back(x);
            }
        }
        priority_queue<int> maxH;
        for(int i=0;i<v.size();i++)
        {
            maxH.push(v[i]);
            if(maxH.size()>k)
            {
                maxH.pop();
            }
        }
        return maxH.top();
        
    }
};