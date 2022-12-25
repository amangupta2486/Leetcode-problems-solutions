class Solution {
public:
    
    bool check(vector<int> &a,int m,int k)
    {
        int n=a.size();
        
        int c=1,j=0;
        
        for(int i=1;i<n;i++)
        {
            if(a[i]-a[j]>=m)
            {
                j=i;
                c++;
            }
            
            if(c>=k)
            {
                return 1;
            }
        }
        
        return 0;
    }
    
    int maximumTastiness(vector<int>& a, int k) {
        
        int n=a.size();
        
        sort(a.begin(),a.end());
        
        int l=0;
        int r=a[n-1]-a[0];
        
        int ans=0;
        //cout<<l<<" "<<r<<endl;
        
        while(l<=r)
        {
            int m=(l+r)/2;
            
            if(check(a,m,k))
            {
                //cout<<m<<" ";
                ans=m;
                l=m+1;
            }
            else
            {
                r=m-1;
            }
        }
        
        //cout<<endl;
        
        return ans;
    }
};