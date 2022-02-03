class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& a, int t) {
        
        int n=a.size();
        vector<vector<int>> ans;
        
        sort(a.begin(),a.end());
        
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int l=j+1,h=n-1;
                
                int b=t-a[i]-a[j];
                
                while(l<h)
                {
                    int s = a[l]+a[h];
                    
                    if(s<b)
                    {
                        l++;
                    }
                    
                    else if(s>b)
                    {
                        h--;
                    }
                    
                    else
                    {
                        int x=a[l];
                        int y=a[h];
                        
                        ans.push_back({a[i],a[j],a[l],a[h]});
                            
                        while(l<h && a[l]==x)
                        {
                            l++;
                        }
                        
                        while(l<h && a[h]==y)
                        {
                            h--;
                        }
                    }
                }
                
                while(j+1<n && a[j]==a[j+1])
                {
                    j++;
                }
            }
            
            while(i+1<n && a[i]==a[i+1])
            {
                i++;
            }
        }
        
        return ans;
    }
};