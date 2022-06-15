class Solution {
public:
    void moveZeroes(vector<int>& a) {
        
        int n=a.size();
        int l=0;
        
        for(int i=0;i<n;i++)
        {
            if(a[i]!=0)
            {
                swap(a[l],a[i]);
                l++;
            }
        }
    }
};