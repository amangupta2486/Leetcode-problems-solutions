/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int maxDepth(Node* root) {
        
        if(root==NULL)
        {
            return 0;
        }
        
        queue<pair<Node*,int>> q;
        
        int ans=1;
        
        q.push({root,1});
        
        while(!q.empty())
        {
            int k=q.size();
            
            while(k--)
            {
                auto p=q.front();
                q.pop();
                
                auto r=p.first;
                auto c=p.second;
                
                ans=max(ans,c);
                
                for(auto i:r->children)
                {
                    q.push({i,c+1});
                }
            }
        }
        
        return ans;
    }
};