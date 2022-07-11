class Solution {
public:
    
    int find(int i,int j,vector<int>& a, int t)
    {
        while(i<=j)
        {
            int m=(i+j)/2;
            
            if(a[m]==t)
            {
                return m;
            }
            
            if(a[m]<t)
            {
                i=m+1;
            }
            else
            {
                j=m-1;
            }
        }
        
        return -1;
    }
    
    vector<int> twoSum(vector<int>& a, int t) {
        
        int n=a.size();
        
        vector<int> v;
        
        for(int i=0;i<n;i++)
        {
            int y=t-a[i];
            int x=0;
            
            if(y>=a[i])
            {
               x=find(i+1,n-1,a,y);
            }
            else
            {
               x=find(0,i-1,a,y);
            }
            
            if(x!=-1)
            {
                v.push_back(i+1);
                v.push_back(x+1);
                break;
            }
        }
        
        return v;
    }
};