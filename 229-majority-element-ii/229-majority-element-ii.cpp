class Solution {
public:
    vector<int> majorityElement(vector<int>& a){
        
        int n=a.size();
        int x1=-1,x2=-1;
        int c1=0,c2=0;
        
        for(int i=0;i<n;i++)
        {
            if(x1==a[i])
            {
                c1++;
            }
            else if(x2==a[i])
            {
                c2++;
            }
            else if(c1<=0)
            {
                x1=a[i];
                c1++;
            }
            else if(c2<=0)
            {
                x2=a[i];
                c2++;
            }
            else
            {
                c1--;
                c2--;
            }
        }
        
        int r1=0,r2=0;
        vector<int> ans;
        
        for(int i=0;i<n;i++)
        {
            if(a[i]==x1)
            {
                r1++;
            }
            else if(a[i]==x2)
            {
                r2++;
            }
        }
        
        if(r1>n/3)
        {
            ans.push_back(x1);
        }
        
        if(r2>n/3)
        {
            ans.push_back(x2);
        }
        
        return ans;
    }
};