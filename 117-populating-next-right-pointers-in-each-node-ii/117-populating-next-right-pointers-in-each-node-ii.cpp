/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        
        if(root==NULL)
        {
            return root;
        }
        queue<Node*> q;
        
        q.push(root);
        
        while(!q.empty())
        {
            int k=q.size();
            
            while(k--)
            {
                auto p=q.front();
                q.pop();
                //cout<<p->val<<" "<<k<<" ";
                Node* r=NULL;
                if(k>0)
                {
                    r=q.front();
                }
                
                p->next=r;
                
                if(p->left!=NULL)
                {
                    q.push({p->left});
                }
                if(p->right!=NULL)
                {
                    q.push({p->right});
                }
            }
           // cout<<endl;
        }
        
        return root;
    }
};