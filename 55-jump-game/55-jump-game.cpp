class Solution {
public:
    bool canJump(vector<int>& a) {
        
        int n=a.size();
        
        int l=n-1;
        
        for(int i=n-1;i>=0;i--)
        {
            if(i+a[i]>=l)
            {
                l=i;
            }
        }
        
        return l==0;
    }
};