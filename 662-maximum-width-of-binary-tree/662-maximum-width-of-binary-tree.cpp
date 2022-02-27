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

    int widthOfBinaryTree(TreeNode* root) {
        
        if(root==NULL)
        {
            return 0;
        }
        
        queue<pair<TreeNode*,int>> q;
        
        q.push({root,0});
        
        vector<long> v;
        
        long first=0,last=0,ans=0;
        
        while(!q.empty())
        {
            long long k=q.size();
 
            long long mi=q.front().second;
            
            for(long long j=0;j<k;j++)
            {
                auto r=q.front();
                q.pop();
                
                auto p=r.first;
                long i=r.second -mi;
                
                //cout<<i<<" ";
                
                if(j==0)
                {
                    first=i;
                }
                
                if(j==k-1)
                {
                    last=i;
                }
                
                if(p->left!=NULL)
                {
                    q.push({p->left,(2*i)+1});
                }
                
                if(p->right!=NULL)
                {
                    q.push({p->right,(2*i)+2});
                }
                
            }
            
           ans=max(ans,(last-first+1));
        }
        
       
        return ans;
    }
};