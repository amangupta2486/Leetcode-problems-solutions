class Solution {
public:
    
    int ans=0;
    
    bool check(string s)
    {
        vector<int> a(26,0);
        
        for(auto x:s)
        {
            if(a[x-'a']>0)
            {
                return 1;
            }
            
            a[x-'a']++;
        }
        
        return 0;
    }
    
    void solve(int i,vector<string>& a,vector<int> &v,int l)
    {
        if(i==a.size())
        {
            ans=max(ans,l);
            return;
        }
        
        int f=1;
        
        int m=a[i].size();
        
        int d=check(a[i]);
        
        if(d==1)
        {
            f=0;
        }
        
        if(d==0)
        {    
            for(int j=0;j<m;j++)
            {
                if(v[a[i][j]-'a']==1)
                {
                    f=0;
                    break;
                }
            }
        }
        
        if(f==1)
        {
            for(int j=0;j<m;j++)
            {
                v[a[i][j]-'a']=1;
            }
            
            solve(i+1,a,v,l+m);
            
            for(int j=0;j<m;j++)
            {
                v[a[i][j]-'a']=0;
            }
        }
        
        solve(i+1,a,v,l);
        
    }
    
    int maxLength(vector<string>& a) {
        
        vector<int> v(26,0);
        
        int n=a.size();
        
        solve(0,a,v,0);
        
        return ans;
    }
};