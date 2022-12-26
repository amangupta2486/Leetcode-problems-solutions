class Solution {
public:
    bool canJump(vector<int>& a) {
        
        int n=a.size();
        
        int l=n-1;
        
        for(int i=n-2;i>=0;i--)
        {
            if(a[i]+i>=l)
            {
                l=i;
            }
        }
        
        return l==0;
    }
};