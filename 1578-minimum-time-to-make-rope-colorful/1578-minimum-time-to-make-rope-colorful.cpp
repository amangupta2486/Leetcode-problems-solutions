class Solution {
public:
    int minCost(string a, vector<int>& t) {
        
        int n=a.size();
        
        int ans=0;
        
        for(int i=0;i<n-1;i++)
        {
            //priority_queue<int,vector<int>,greater<int>> q;
            
            int s=0,f=0,mx=0;
            
            if(a[i]==a[i+1])
            {
                s+=t[i];
                mx=max(mx,t[i]);
                f=1;
                
                while(i+1<n && a[i]==a[i+1])
                {
                    i++;
                    s+=t[i];
                    mx=max(mx,t[i]);
                }
            }
            
            if(f==1)
            {
                ans+=s-mx;
            }
        }
        
        return ans;
    }
};