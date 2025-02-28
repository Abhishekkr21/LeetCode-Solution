class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int cnt0 = 1;
    int cnt1 = 0;
    int possible = 0;

    for (auto x : flowerbed) {
        if (x == 0) {
            cnt0++;
        } else {
            possible += (cnt0 - 1) / 2;
            cnt0 = 0;
            cnt1++;
        }
    }

    possible += cnt0 / 2;  

    return possible >= n;
    }
};