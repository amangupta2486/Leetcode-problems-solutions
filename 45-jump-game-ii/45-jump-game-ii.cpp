class Solution {
public:
    int jump(vector<int>& a) {
        
        int n=a.size();
        int j=0,end=0,far=0;
        
        for(int i=0;i<n-1;i++)
        {
            far=max(far,a[i]+i);
            
            if(i==end)
            {
                end=far;
                j++;
            }
        }
        
        return j;
    }
};