
struct Node{
    public:
    
    Node* link[27];
    vector<int> ind;
    
    bool containkey(char ch)
    {
        return link[ch-'a']!=NULL;
    }
    
    void put(char ch,Node* node)
    {
        link[ch-'a']=node;
    }
    
    void addInd(int x)
    {
        ind.push_back(x);
    }
    
    Node* get(char ch)
    {
        return link[ch-'a'];
    }
};

class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& p, string w) {
        
        Node* root=new Node();
             
        int n=p.size();
        sort(p.begin(),p.end());
        
        for(int i=0;i<n;i++)
        {
            Node* node=root;
            
            string s=p[i];
            int m=s.size();
            for(int j=0;j<m;j++)
            {
                if(!node->containkey(s[j]))
                {
                    node->put(s[j],new Node());
                }
                //cout<<i<<" ";
                
                node=node->get(s[j]);
                node->addInd(i);
            }
        }
        
        int m=w.size();
        
        
        vector<vector<string>> ans;
        
        string s="";
        
        for(int i=0;i<m;i++)
        {    
            Node* node=root;
            s+=w[i];
            int f=1;
            
            for(int j=0;j<s.size();j++)
            {
                if(!node->containkey(s[j]))
                {
                    f=0;
                    break;
                }
                 if(node->containkey(s[j]))
                 {
                     node=node->get(s[j]);
                 }
            }
             vector<string> v;

             auto r=node->ind;
             if(f==0)
             {
                 ans.push_back(v);
                 //cout<<0<<" ";
                 continue;
             }
             for(int k=0;k<3 && k<r.size();k++)
             {
                // cout<<p[r[k]]<<" ";
                 v.push_back(p[r[k]]);
             }
            //cout<<endl;
            ans.push_back(v);
         
            //node=node->get(w[i]);
        }
        
        
        return ans;
    }
};