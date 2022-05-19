```
/**
* Definition for a binary tree node.
* struct TreeNode {
*     int val;
*     TreeNode *left;
*     TreeNode *right;
*     TreeNode() : val(0), left(nullptr), right(nullptr) {}
*     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
*     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
* };
*/
class Solution {
public:
TreeNode* mergeTrees(TreeNode* a, TreeNode* b) {
if(a==NULL)
{
return b;
}
if(b==NULL)
{
return a;
}
a->val += b->val;
a->left = mergeTrees(a->left,b->left);
a->right = mergeTrees(a->right,b->right);
return a;
}
};
```
​
```
/**
* Definition for a binary tree node.
* struct TreeNode {
*     int val;
*     TreeNode *left;
*     TreeNode *right;
*     TreeNode() : val(0), left(nullptr), right(nullptr) {}
*     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
*     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
* };
*/
class Solution {
public:
TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
if(root1==NULL && root2==NULL)
return root1;
if(root1==NULL)
return root2;
if(root2==NULL)
return root1;
TreeNode* newhead = root1;
newhead -> val = root1->val + root2->val;
newhead -> left =  mergeTrees(root1->left,root2->left);
newhead -> right =  mergeTrees(root1->right,root2->right);
return newhead;
}
};
```