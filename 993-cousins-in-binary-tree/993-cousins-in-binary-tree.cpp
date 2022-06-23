/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    bool check(vector<int> &v,int x,int y)
    {
        bool check1=0,check2=0;
        
        for(auto i:v)
        {
            if(i==x)
            {
                check1=1;
            }
            if(i==y)
            {
                check2=1;
            }
        }
        
        return (check1 && check2);
        
    }
    bool isCousins(TreeNode* root, int x, int y) {
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty())
        {
            vector<int> v;
            v.clear();
            int k=q.size();
            
            while(k--)
            {
                auto p=q.front();
                q.pop();
                
                if(p->left!=NULL && p->right!=NULL)
                {
                    if((p->left->val==x && p->right->val==y)||(p->left->val==y && p->right->val==x))
                    {
                        return false;
                    }
                }
                
                v.push_back(p->val);
                
                if(p->left!=NULL)
                {
                    q.push(p->left);
                }
                if(p->right!=NULL)
                {
                    q.push(p->right);
                }
            }
            
            if(check(v,x,y))
            {
                return true;
            }
        }
        
        return false;
    }
};