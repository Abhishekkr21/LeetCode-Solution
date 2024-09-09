class Solution {
    void dfs(int i, vector<int> adj[], vector<int> &v)
    {
        v[i]=1;
        for(auto x: adj[i])
        {
            if(!v[x])
            dfs(x,adj,v);
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int> v(n,0);
        int res=0;
        vector<int> adj[n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(isConnected[i][j])
                {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            if(!v[i])
            {
                dfs(i,adj,v);
                res++;
            }
        }
return res;
        
    }
};