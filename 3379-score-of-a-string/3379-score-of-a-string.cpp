class Solution {
public:
    int scoreOfString(string s) {
        int n = s.size();
        int sum=0;
        for(int i=0;i<n-1;i++)
        {
            int a= s[i]-'0';
            int b = s[i+1]-'0';
            sum+=abs(a-b);

        }
        return sum;
        
    }
};