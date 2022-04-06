class Solution {
public:
    int threeSumMulti(vector<int>& a, int t) {
         int n=a.size();
         int mod=1e9 + 7;
        
        sort(a.begin(),a.end());
        
        vector<vector<int>> ans;
        
        int c=0;
        
        map<int,int> m;
        
        for(auto i:a)
        {
            m[i]++;
        }
        for(int i=0;i<n-2;i++)
        {
            int j=i+1,k=n-1;
            
            while(j<k)
            {
                int s=a[i]+a[j]+a[k];
                
                if(s<t)
                {
                    j++;
                }
                
                else if(s>t)
                {
                    k--;
                }
                
                else if(a[j]!=a[k])
                {
                    int l=1,r=1;
                    int x=a[j],y=a[k];
                    
                    while(j+1<k && x==a[j+1])
                    {
                        l++;
                        j++;
                    }
                    
                    while(j<k-1 && y==a[k-1])
                    {
                        r++;
                        k--;
                    }
                    
                    c+=(l*r);
                    c%=mod;
                    
                    j++;
                    k--;   
                }
                else
                {
                    c+=(k-j+1)*(k-j)/2;
                    c%=mod;
                    break;
                }
            }
            
            // while(i+1<n && a[i]==a[i+1])
            // {
            //     i++;
            // }
        }
        
        return c%mod;
        
    }
};