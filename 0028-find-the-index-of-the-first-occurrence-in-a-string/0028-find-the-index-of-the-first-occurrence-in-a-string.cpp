class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.length();
        for(int i=0;i<n;i++)
        {
            if(haystack[i]==needle[0])
            {
                int j=i+1;
                int k=1;
                while(haystack[j] && needle[k])
                {
                    if(haystack[j] !=needle[k])
                    break;
                    j++;
                    k++;
                }
                if(k==needle.length())
                return i;
            }
        }
       return -1;
        
        
    }
};