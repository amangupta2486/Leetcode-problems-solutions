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
            int l=q.size();
            Node* prev=NULL;
            
            while(l--)
            {
                auto r=q.front();
                q.pop();
                
                if(prev!=NULL)
                {
                    prev->next=r;
                }
                
                prev=r;
                
                if(r->left!=NULL)
                {
                    q.push(r->left);
                }
                
                if(r->right!=NULL)
                {
                    q.push(r->right);
                }
            }
        }
        
        return root;
    }
};