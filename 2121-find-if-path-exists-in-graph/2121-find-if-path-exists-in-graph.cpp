class DSU {
    public:
    vector<int> parent;
    DSU(int n)
    {
        parent.resize(n);
        for(int i=0;i<n;i++)
        {
            parent[i]=i;
        }
    }
    int find(int x)
    {
      if(parent[x]==x)
      return x;
     return parent[x]=find(parent[x]);
    }
    bool unite(int x, int y)
    {
       int a= find(x);
       int b = find(y);
       if(a==b)
       return false;
       parent[a]=b;
       return true;
    }

};
class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        DSU dsu(n);
        for(const vector<int>& edge :edges)
        {
          int u = edge[0];
          int v= edge[1];
          dsu.unite(u,v);
        }
        return dsu.find(source) == dsu.find(destination);
        
    }
};