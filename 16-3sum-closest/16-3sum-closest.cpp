class Solution {
public:
    int threeSumClosest(vector<int>& a, int t){
        
        int n=a.size();
        
        sort(a.begin(),a.end());
        
        int ans=0,diff=100000,f=0;
        
        for(int i=0;i<n-2;i++)
        {
            int j=i+1,k=n-1;
            
            while(j<k)
            {
                int s=a[i]+a[j]+a[k];

                if(abs(s-t)<diff)
                {
                    diff=abs(s-t);
                    ans=s;
                    
                    if(s==t)
                    {
                        ans=t;
                        f=1;
                        break;
                    }
                }
                
                if(s<t)
                {
                    j++;  
                }
                
                if(s>t)
                {
                    k--;
                }
                
            }
            
            if(f==1)
            {
                break;
            }
            
            while(i+1<n && a[i]==a[i+1])
            {
                i++;
            }
        }
        
        return ans;
    }
};