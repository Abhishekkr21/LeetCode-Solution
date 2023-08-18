class Solution {
public:
    bool isValid(string str) {
        stack<char> st;
        unordered_map<char,char> mp= {{')','('}, {'}','{'}, {']','['}};
        for(char c: str)
        {
            if(c=='(' || c =='{' || c=='[')
            {
                st.push(c);
            }
            else if(c==')' || c=='}' || c==']')
            {
                if(st.empty() || st.top()!= mp[c])
                return false;
                 st.pop();
            }
           
        }
        return st.empty();
    } 
};