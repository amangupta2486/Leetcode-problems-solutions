class Solution {
public:
    int compareVersion(string v1, string v2) {
        
        string a,b;
        
        stringstream s(v1);
        stringstream ss(v2);
        
        vector<int> p,q;
        
        while(getline(s,a,'.'))
        {
            int c = stoi(a);
            
            p.push_back(c);
            cout<<c<<" ";
        }
        
        cout<<endl;
        
        while(getline(ss,b,'.'))
        {
            int c = stoi(b);
            q.push_back(c);
            cout<<c<<" ";
        }
         cout<<endl;
        int n=p.size(),m=q.size();
        
        int f=0,i=0,j=0;
        
        while(i<p.size() && j<q.size())
        {
            if(p[i]>q[i])
            {
                f=1;
                break;
            }
            
             if(p[i]<q[i])
            {
                f=-1;
                break;
            }
            
            i++;
            j++;
        }
        
         while(i<p.size())
         {
             if(p[i]==0)
             i++;
             
             else
             break;
         }
        
         while(j<q.size())
         {
             if(q[j]==0)
                j++;
             
             else
             break;
         }
        
        if(n-i > m-j && f==0)
        {
            f=1;
        }
         if(n-i < m-j && f==0)
        {
            f=-1;
        }
        return f;
    }
};