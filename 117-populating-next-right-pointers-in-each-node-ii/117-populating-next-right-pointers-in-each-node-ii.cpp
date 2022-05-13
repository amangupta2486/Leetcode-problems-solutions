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
            return NULL;
        }
        
        queue<Node*> q;
        q.push(root);
        int f=1;

        while(!q.empty())
        {
            int k=q.size();
            
            Node* temp=q.front();
            int f=1;
            while(k>0)
            {    
                auto p=q.front();
                q.pop();
                
                if(f==0)
                {
                    temp->next=p;
                    //cout<<p->val<<" ";
                    temp=temp->next;
                }
                
                f=0;
                
                if(p->left!=NULL)
                {
                    q.push(p->left);
                }
                
                if(p->right!=NULL)
                {
                    q.push(p->right);
                }
                
                k--;
            }
        }
        
        return root;
    }
};

/*
Input
[1,2,3,4,5,null,6,7,null,null,null,null,8]
Output
[1,#,2,3,#,4,5,6,#,7,#]
Expected
[1,#,2,3,#,4,5,6,#,7,8,#]

[1,2,3,4,5,null,7]
[]
[1,2,3,4,null,null,5]
[1,2,3,4,5,null,6,7,null,null,null,null,8]
*/