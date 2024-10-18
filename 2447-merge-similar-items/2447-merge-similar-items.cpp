class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        int n= items1.size();
        int m = items2.size();
        sort(items1.begin(),items1.end());
        sort(items2.begin(),items2.end());
        vector<vector<int>> items;
        int i=0,j=0;
        while(i<n && j<m)
        {
           if(items1[i][0]==items2[j][0])
           {
             items.push_back({items1[i][0],items2[j][1]+items1[i][1]});
             i++;
             j++;
           }
            else if (items1[i][0] < items2[j][0]) {
                items.push_back(items1[i]);
                i++;
            } 
            else {
                items.push_back(items2[j]);
                j++;
            }
        }
        while (i < n) {
            items.push_back(items1[i]);
            i++;
        }
        
        while (j < m) {
            items.push_back(items2[j]);
            j++;
        }
        return items;
        
    }
};