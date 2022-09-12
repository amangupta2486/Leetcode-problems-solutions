class Solution {
public:
    int maxTurbulenceSize(vector<int>& a) {
        
        int n=a.size();
        
        int c1=1,c2=0,ans=1;
        
        for(int i=0;i<n-1;i++)
        {
            if(a[i]>a[i+1] && i%2==0)
            {
                c1++;
            }
            else if(a[i]<a[i+1] && i%2!=0)
            {
                c1++;
            }
            else
            {
                ans=max(ans,c1);
                c1=1;
            }
            
            ans=max(ans,c1);
        }
        

        c1=1;
        
        for(int i=0;i<n-1;i++)
        {
            if(a[i]<a[i+1] && i%2==0)
            {
                c1++;
            }
            else if(a[i]>a[i+1] && i%2!=0)
            {
                c1++;
            }
            else
            {
                ans=max(ans,c1);
                c1=1;
            }
            
            ans=max(ans,c1);
        }
        
        return ans;
    }
};

/*
Input
[0,8,45,88,48,68,28,55,17,24]
Output
2
Expected
8
*/