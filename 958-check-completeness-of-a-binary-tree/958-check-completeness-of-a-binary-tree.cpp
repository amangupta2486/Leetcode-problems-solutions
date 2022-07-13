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
    
    int height(TreeNode* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        
        int l=height(root->left);
        int r=height(root->right);
        
        return 1+max(l,r);
    }
    
    bool isCompleteTree(TreeNode* root) {
        
        queue<TreeNode*> q;
        q.push(root);
        
        int h=height(root);
        
        //cout<<h<<endl;
        
        vector<TreeNode*> v;
        int n=1;
        
        while(!q.empty())
        {
            int l=q.size();

            while(l--)
            {
                auto p=q.front();
                q.pop();
                
                if(n==h)
                {
                    //cout<<n<<" ";
                    v.push_back(p);
                }
                
                if(n<h && p==NULL)
                {
                    return false;
                }
                
                if(p!=NULL)
                {
                    q.push(p->left);
                    q.push(p->right);
                }
            }
            
            n++;
        }
        
        //cout<<v.size()<<endl;
        
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==NULL)
            {
                for(int j=i+1;j<v.size();j++)
                {
                    if(v[j]!=NULL)
                    {
                        return false;
                    }
                }
            }
        }
        
        return true;
    }
};