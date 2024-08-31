class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> mp1;
      for(char x: magazine) mp1[x]++;
      for(auto y: ransomNote)
      {
        if(mp1.find(y)!= mp1.end() && mp1[y]>0)
        {
            mp1[y]--;
        }
        else
        {
            return false;
        }
      }
      return true;
    }
};