class Solution {
public:
    void moveZeroes(vector<int>& a) {
        
        int n=a.size();
        

        for(int i=0,j=0;i<n && j<n;i++)
        {
            if(a[i]!=0)
            {
                swap(a[j++],a[i]);
            }
        }
       
    }
};