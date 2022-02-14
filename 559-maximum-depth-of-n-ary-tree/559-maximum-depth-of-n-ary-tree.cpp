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
        
        q.push({root,0});
        
        int ans=0;
        
        while(!q.empty())
        {
            int k=q.size();
            
            while(k--)
            {
                auto p = q.front();
                q.pop();
                
                auto v= p.first;
                int c= p.second;
                c++;
                
                ans=max(ans,c);
                
                for(auto i: v->children)
                {
                    q.push({i,c});
                }
            }
        }
        
        return ans;
    }
};