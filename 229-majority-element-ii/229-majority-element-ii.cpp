class Solution {
public:
    vector<int> majorityElement(vector<int>& a) {
        
        int n=a.size();
        
        int c1=0,c2=0;
        
        int x=0,y=0;
        
        for(int i=0;i<n;i++)
        {
            
            if(x==a[i])
            {
                c1++;
            }
            
            else if(y==a[i])
            {
                c2++;
            }
            
            else if(c1==0)
            {
                x=a[i];
                c1++;
            }
            
            else if(c2==0)
            {
                y=a[i];
                c2++;
            }
            
            else
            {
                c1--;
                c2--;
            }
        }
        
        //cout<<x<<" "<<c1<<" "<<y<<" "<<c2<<endl;
        
        vector<int> ans;
        
        int x1=0,x2=0;
        
        for(int i=0;i<n;i++)
        {
            if(x==a[i])
            {
                x1++;
            }
            else if(y==a[i])
            {
                x2++;
            }
        }
        
        
        
        if(x1>n/3)
        {
            ans.push_back(x);
        }
        
        if(x2>n/3)
        {
            ans.push_back(y);
        }
        
        return ans;
    }
};