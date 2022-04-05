class Solution {
public:
    int majorityElement(vector<int>& a) {
        
        int n=a.size();
        
        int b=a[0];
        int c=1;
        
        for(int i=1;i<n;i++)
        {
            if(b==a[i])
            {
                c++;
            }
            
            if(a[i]!=b)
            {
                c--;
            }
            
            if(c<0)
            {
                b=a[i];
                c=1;
            }
        }
        
        return b;
    }
};