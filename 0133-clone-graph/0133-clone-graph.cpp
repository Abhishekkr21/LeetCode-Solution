/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
    void dfs(Node* node, unordered_map<Node*, Node*>& mp)
    {
        if(mp.find(node)!=mp.end())
        return;
        Node* clone = new Node(node->val);
        mp[node]=clone;
        for(Node* n: node->neighbors)
        {
            dfs(n,mp);
            clone->neighbors.push_back(mp[n]);
        }
    }
public:
    Node* cloneGraph(Node* node) {
        if(!node)
        return nullptr;
        unordered_map<Node* , Node*> mp;
        dfs(node, mp);
        return mp[node];
        
    }
};