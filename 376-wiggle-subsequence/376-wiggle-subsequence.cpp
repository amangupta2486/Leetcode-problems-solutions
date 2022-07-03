class Solution {
public:
    int wiggleMaxLength(vector<int>& a) {
        
        int n=a.size();
        
        
        vector<int> v;
        
        for(int i=0;i<n-1;i++)
        {
            while(i+1<n && a[i]==a[i+1])
            {
                i++;
            }
            if(i+1<n)
            v.push_back(a[i+1]-a[i]);
        }
        
        int m=v.size();
        
        int ans=0;
        
        for(int i=0;i<m;i++)
        {
            int c=1;
            int b=v[i];
            int f=1;
            
            if(v[i]<0)
                f=0;
            
            for(int j=i+1;j<m;j++)
            {
                if(f && v[j]<0 )
                {
                    c++;
                    f^=1;
                }
                
                if(f==0 && v[j]>0)
                {
                    c++;
                    f^=1;
                }
            }
            
            ans=max(ans,c);
        }
        
        return ans+1;
    }
};