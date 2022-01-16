class Solution {
public:
    int maxDistToClosest(vector<int>& s) {
        
        int n=s.size();
        
        int a1=0,a2=0,a3=0;
        
        for(int i=0;i<n;i++)
        {
            if(s[i]==0)
            {
                a1++;
            }
            else
            {
                break;
            }
        }
        
         for(int i=n-1;i>=0;i--)
        {
            if(s[i]==0)
            {
                a2++;
            }
            else
            {
                break;
            }
        }
        
        int ans=0;
        
        for(int i=0;i<n;i++)
        {
            if(s[i]==0)
            {
                a3++;
            }
            
            else
            {
                ans=max(ans,a3);
                a3=0;
            }
            
        }
        
        if(ans%2==0)
        {
            ans=ans/2;
        }
        else
        {
            ans=(ans/2)+1;
        }
        
        ans=max({a1,a2,ans});
        
        return ans;
    }
};