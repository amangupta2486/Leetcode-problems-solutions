class Solution {
public:
    int majorityElement(vector<int>& a) {
        
        int n=a.size();
        
        int b=0,c=0;
        
        for(int i=0;i<n;i++)
        {
            if(c==0)
            {
                b=a[i];
            }
            
            if(b==a[i])
            {
                c++;
            }
            
            else
            {
                c--;
            }
        }
        
        return b;
    }
    
};