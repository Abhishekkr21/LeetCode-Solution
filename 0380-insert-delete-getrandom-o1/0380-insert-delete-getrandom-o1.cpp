class RandomizedSet {
    private:
    unordered_map<int, int> mp; 
    set<int> st; 
public:
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(mp.find(val)!=mp.end())
        return false;
        mp[val]=1;
        st.insert(val);
        return true;
        
    }
    
    bool remove(int val) {
  if(mp.find(val)==mp.end())
  return false;
  mp.erase(val);
  st.erase(val);
  return true;
        
    }
    
    int getRandom() {
        int r = rand() %st.size();
        auto it = st.begin();
        advance(it,r);
        return *it;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */