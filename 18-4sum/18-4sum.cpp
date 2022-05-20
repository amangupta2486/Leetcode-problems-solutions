class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& a, int t) {
        
        vector<vector<int>> ans;
        
        sort(a.begin(),a.end());
        
        int n=a.size();
        
        for(int i=0;i<n-3;i++)
        {
            for(int j=i+1;j<n-2;j++)
            {
                int x=j+1,y=n-1;
                long s=t-(a[i]+a[j]);
                
                while(x<y)
                {
                    long f=a[x]+a[y];
                    
                    if(s-f>0)
                    {
                        x++;
                    }
                    else if(s-f<0)
                    {
                        y--;
                    }
                    else
                    {
                        int p=a[x];
                        int q=a[y];
                        
                        ans.push_back({a[i],a[j],p,q});
                        
                        while(x+1<y && a[x+1]==p)
                        {
                            x++;
                        }
                        while(x<y-1 && a[y-1]==q)
                        {
                            y--;
                        }
                        
                        x++;
                        y--;
                    }
                }
                
                while(j+1<n-2 && a[j+1]==a[j])
                {
                    j++;
                }
            }
            
            while(i+1<n-3 && a[i+1]==a[i])
            {
                i++;
            }
        }
        
        return ans;
    }
};