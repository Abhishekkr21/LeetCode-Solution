class Solution {
public:
    int nthUglyNumber(int n) {
   
  priority_queue<long, vector<long>, greater<long>> minHeap;
        unordered_set<long> seen;

        minHeap.push(1);
        seen.insert(1);
        
        long ugly = 1;
        for (int i = 1; i <= n; i++) {
            ugly = minHeap.top();
            minHeap.pop();

            for (int factor : {2, 3, 5}) {
                long next = ugly * factor;
                if (seen.find(next) == seen.end()) {
                    seen.insert(next);
                    minHeap.push(next);
                }
            }
        }

        return ugly;
    }
};