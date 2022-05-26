class Solution {
public:
    bool canJump(vector<int>& a) {
        
        int n=a.size();
        
        int good_index=n-1;
        
        for(int i=n-2;i>=0;i--)
        {
            if(i+a[i]>=good_index)
            {
                good_index=i;
            }
        }

        return good_index==0;
    }
};