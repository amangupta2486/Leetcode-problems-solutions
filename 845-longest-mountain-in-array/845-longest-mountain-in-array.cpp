class Solution {
public:
    int longestMountain(vector<int>& a) {
        
        int n=a.size();
        
        if(n<3)
        {
            return 0;
        }
        
        int ans=0;
        
        
        for(int j=0;j<n-1;j++)
        {
            int l=1;
            int i=j;
            
            if(a[i]<a[i+1])
            {
//                 cout<<a[i]<<" ";
                
                while(i+1<n && a[i]<a[i+1])
                {
                    i++;
                    l++;
                }
                
                if(i+1<n && a[i]<=a[i+1])
                {
                    //cout<<a[i]<<" ";
                    continue;
                }
                
                if(i==n-1)
                {
                    continue;
                }
                
                while(i+1<n && a[i]>a[i+1])
                {
                    i++;
                    l++;
                }
                
                ans=max(ans,l);
            }
        }
        
        return ans;
    }
};