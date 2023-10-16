class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int k=0;
        int l=0;
        for(int i=0;i<n;i++)
        {
            if(s[i] != ' ')
            {
              l= i-k+1;
            }
            else
            {
                k=i+1;
            }
        }
        return l;
        
    }
};