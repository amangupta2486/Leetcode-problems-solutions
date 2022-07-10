class Solution {
public:
    int compareVersion(string v1, string v2) {
        
        stringstream ss1(v1),ss2(v2);
        
        string str="";
        
        vector<string> a,b;
        
        while(getline(ss1,str,'.'))
        {
            a.push_back(str);
        }
        
        str="";
        
        while(getline(ss2,str,'.'))
        {
            b.push_back(str);
        }
        
        int n=a.size(),m=b.size();
        
        for(int i=0;i<max(n,m);i++)
        {
            int x=0,y=0;
            
            if(i<n)
            x=stoi(a[i]);
            
            if(i<m)
            y=stoi(b[i]);
            
            if(x>y)
            {
                return 1;
            }
            
            else if(x<y)
            {
                return -1;
            }
                
        }
        
        return 0;
        
    }
};