class Solution {
public:
    int minCost(string a, vector<int>& t) {
        
        int n=a.size();
        
        vector<int> v;
        int s=0;
        int mx=0,ans=0;
        
        for(int i=0;i<n-1;i++)
        {
            if(a[i]==a[i+1])
            {
                s+=t[i];
                mx=max(mx,t[i]);
            }
            else
            {
                if(i-1>=0 && a[i]==a[i-1])
                {
                    s+=t[i];
                    mx=max(mx,t[i]);
                    s-=mx;
                    ans+=s;
                    mx=0;
                }                
                s=0;
            }
        }
        int i=n-1;
        
        if(i-1>=0 && a[i]==a[i-1])
        {
            s+=t[i];
            mx=max(mx,t[i]);
            s-=mx;
            ans+=s;
        }     
        
        return ans;
    }
};