class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int s1= word1.size();
        int s2 = word2.size();
        int s = s1+s2;
       int i=0;
       int j=0;
       string word;
       while(i<s1 || j<s2)
       {
        if(i<s1)
        {
            word.push_back(word1[i]);
            i++;
        }
        if(j<s2)
        {
            word.push_back(word2[j]);
            j++;
        }
       }

        return word;
        
    }
};