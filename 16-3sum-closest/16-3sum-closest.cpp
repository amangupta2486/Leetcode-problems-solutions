class Solution {
public:
    int threeSumClosest(vector<int>& a, int t) {
        
        int n=a.size();
        
        sort(a.begin(),a.end());
        
        int ans=100000;
        
        for(int i=0;i<n-2;i++)
        {
            int j=i+1,k=n-1;
            
            while(j<k)
            {
                int s=a[i]+a[j]+a[k];
                
                if(s>t)
                {
                    if(abs(ans-t)>abs(s-t))
                    {
                        ans=s;
                    }
                    k--;
                }
                
                else
                {
                    if(abs(ans-t)>abs(s-t))
                    {
                        ans=s;
                    }
                    j++;
                }
            }
        }
        
        return ans;
    }
};