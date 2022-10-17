class Solution {
public:
    
    vector<int> solve(vector<int> &a)
    {
        int n=a.size();
        
        vector<int> v(n,0);
        
        for(int i=1;i<n-1;i++)
        {
            if(a[i-1]==a[i+1])
            {
                v[i]=1;
            }
        }
        
        return v;
    }
    
    vector<int> prisonAfterNDays(vector<int>& a, int k) {
        
        int n=a.size();
        
        unordered_set<string> mp;
        
        int c=0,f=0;
        
        for(int i=0;i<k;i++)
        {
            auto v=solve(a);
            
            string s="";
            
            for(int i=0;i<n;i++)
            {
                s+=v[i]+'0';
            }
            
            if(mp.find(s)==mp.end())
            {
                c++;
                mp.insert(s);
            }
            else
            {
                f=1;
                break;
            }
            
            a=v;
        }
        
        if(f==1)
        {
            k=k%c;
            
            for(int i=0;i<k;i++)
            {
                a=solve(a);
            }
        }
        
        return a;
    }
};