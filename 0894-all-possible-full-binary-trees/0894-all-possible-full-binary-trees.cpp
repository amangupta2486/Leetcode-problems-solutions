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
    vector<TreeNode*> allPossibleFBT(int n) {
        
        vector<TreeNode*> ans;
        
        if(n<1 || n%2==0)
        {
            return ans;
        }
        
        if(n==1)
        {
            ans.push_back(new TreeNode(0));
            return ans;
        }
        
        for(int i=1;i<n;i+=2)
        {
            auto l=allPossibleFBT(i);
            auto r=allPossibleFBT(n-1-i);
            
            for(int i=0;i<l.size();i++)
            {
                for(int j=0;j<r.size();j++)
                {
                    TreeNode* root=new TreeNode(0);
                    
                    root->left=l[i];
                    root->right=r[j];
                    
                    ans.push_back(root);
                }
            }
        }
        
        return ans;
    }
};