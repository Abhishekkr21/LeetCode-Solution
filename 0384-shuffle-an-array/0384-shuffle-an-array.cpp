class Solution {
private:
vector<int> nums;
public:
    Solution(vector<int>& nums) {
       this->nums = nums;
    }
    
    vector<int> reset() {
        vector<int> v = nums;
        return v;
        
    }
    
    vector<int> shuffle() {
        vector<int> v =nums;
        random_shuffle(v.begin(),v.end());
        return v;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */