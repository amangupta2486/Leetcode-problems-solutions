class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& a) {
        
        int n=a.size();
        
        int s=0;
        
        for(int i=0;i<n;i++)
        {
            s+=a[i];
        }
        
        if(s%3==0)
        {
            int x=s/3;
            
            int y=0,c=0;
            
            for(int i=0;i<n;i++)
            {
                y+=a[i];
                
                if(y==x)
                {
                    c++;
                    y=0;
                }
            }
            
            if(c>=3)
            {
                return 1;
            }
            
            return 0;
        }
        
        return 0;
    }
};