class Solution {
public:
    int minBitFlips(int start, int goal) {
        int xorRes= start ^ goal;
        int ans =0;
        while(xorRes>0)
        {
            ans+=xorRes&1;
            xorRes>>=1;
        }

        return ans;
    }
};