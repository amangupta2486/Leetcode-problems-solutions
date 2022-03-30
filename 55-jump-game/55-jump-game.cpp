class Solution {
public:
    bool canJump(vector<int>& a) {
        
        int n=a.size();
        
        int l=n-1;
        
        for(int i=n-2;i>=0;i--)
        {
            if(i+a[i]>=l)
            {
                l=i;
            }
        }
        
        return l==0;
    }
};

// [2,3,1,1,4]
// [3,2,1,0,4]
// [2,0,0]
// [0,2,3]