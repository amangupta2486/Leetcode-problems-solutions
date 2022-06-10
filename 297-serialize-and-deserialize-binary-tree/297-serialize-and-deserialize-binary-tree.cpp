/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    
    string serialize(TreeNode* root) {
        
        if(root==NULL)
        {
            return "";
        }
        string s="";
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty())
        {
            auto p=q.front();
            q.pop();
            
            if(p==NULL)
            {
                s.append("#,");
            }
            
            else
            s.append(to_string(p->val)+',');
            
            if(p!=NULL)
            {
                q.push(p->left);
                q.push(p->right);
            }
            
        }
        //cout<<s<<endl;
        return s;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string d) {
        
        if(d=="")
        {
            return NULL;
        }
        
        queue<TreeNode*> q;
        stringstream s(d);
        string str;
        
        getline(s,str,',');
        int a=stoi(str);
        //cout<<a<<endl;
        TreeNode* r=new TreeNode(a);
        q.push(r);
        
        int i=1;
       // cout<<endl;
        
        while(!q.empty())
        {
            auto p=q.front();
            q.pop();
            //cout<<d[i];
            getline(s,str,',');
            if(str=="#")
            {
                p->left=NULL;
                
            }
            else
            {
                a=stoi(str);
                TreeNode* node=new TreeNode(a);
                p->left=node;
                q.push(node);
                
            }
           // cout<<d[i];
            getline(s,str,',');
            
            if(str=="#")
            {
                p->right=NULL;
                
            }
            else
            {
                a=stoi(str);
                TreeNode* node=new TreeNode(a);
                p->right=node;
                q.push(node);
                
            }
        }
        
        return r;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));