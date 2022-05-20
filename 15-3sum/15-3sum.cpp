class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        
        vector<vector<int>> ans;
        
        int n=a.size();
        sort(a.begin(),a.end());
        
        for(int i=0;i<n-2;i++)
        {
            int j=i+1,k=n-1;
            
            while(j<k)
            {
                int s=a[i]+a[j]+a[k];
                //cout<<s<<" ";
                if(s<0)
                {
                    j++;
                }
                
                else if(s>0)
                {
                    k--;
                }
                
                else
                {
                    int x=a[j];
                    int y=a[k];
                    
                    ans.push_back({a[i],x,y});
                    while(j+1<k && a[j+1]==x)
                    {
                        j++;
                    }
                    
                    while(j<k-1 && a[k-1]==y)
                    {
                        k--;
                    }
                    
                    j++;
                    k--;
                }
            }
            
            while(i+1<n-2 && a[i+1]==a[i])
            {
                i++;
            }
        }
        
        return ans;
    }
};