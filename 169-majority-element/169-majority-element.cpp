class Solution {
public:
    int majorityElement(vector<int>& a) {
        
        int n=a.size();
        int c=1;
        int b=a[0];
        
        for(int i=1;i<n;i++)
        {
            if(b==a[i])
            {
                c++;
            }
            
            else
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