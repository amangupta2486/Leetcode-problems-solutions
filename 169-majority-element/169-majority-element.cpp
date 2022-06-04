class Solution {
public:
    int majorityElement(vector<int>& a) {
        
        int n=a.size();
        int b=a[0];
        int c=0;
        
        for(int i=0;i<n;i++)
        {
            if(b==a[i])
            {
                c++;
            }
            
            else if(c==0)
            {
                b=a[i];
                c=1;
            }
            
            else
            {
                c--;
            }
        }
        
        return b;
    }
};