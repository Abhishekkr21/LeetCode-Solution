class Solution {
public:
    bool isIsomorphic(string s, string t) {
         if (s.size() != t.size()) {
            return false;
        }

        unordered_map<char, char> mapST;
        unordered_map<char, char> mapTS;

        for (int i = 0; i < s.size(); ++i) {
            char c1 = s[i];
            char c2 = t[i];

            if (mapST.find(c1) != mapST.end() && mapST[c1] != c2) {
                return false;
            }
            if (mapTS.find(c2) != mapTS.end() && mapTS[c2] != c1) {
                return false;
            }

            mapST[c1] = c2;
            mapTS[c2] = c1;
        }

        return true;
        
    }
};