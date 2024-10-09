class Solution {
public:
    int reversePairs(vector<int>& nums) {
        return mergeSortAndCount(nums, 0, nums.size() - 1);
    }
    
    int mergeSortAndCount(vector<int>& nums, int left, int right) {
        if (left >= right) return 0;
        int mid = left + (right - left) / 2;
        int count = mergeSortAndCount(nums, left, mid) + mergeSortAndCount(nums, mid + 1, right);
        
        int j = mid + 1;
        for (int i = left; i <= mid; ++i) {
            while (j <= right && (long long)nums[i] > 2LL * nums[j]) {
                j++;
            }
            count += (j - (mid + 1));
        }
        
        merge(nums, left, mid, right);
        return count;
    }
    
    void merge(vector<int>& nums, int left, int mid, int right) {
        vector<int> temp;
        int i = left, j = mid + 1;
        
        while (i <= mid && j <= right) {
            if (nums[i] <= nums[j]) {
                temp.push_back(nums[i++]);
            } else {
                temp.push_back(nums[j++]);
            }
        }
        
        while (i <= mid) {
            temp.push_back(nums[i++]);
        }
        
        while (j <= right) {
            temp.push_back(nums[j++]);
        }
        
        for (int i = left; i <= right; ++i) {
            nums[i] = temp[i - left];
        }
    }
};
