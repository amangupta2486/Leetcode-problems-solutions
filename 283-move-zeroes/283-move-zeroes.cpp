class Solution {
public:
    void moveZeroes(vector<int>& a) {
        
        int n=a.size();
        
        int j=0;
        
        for(int i=0;i<n;i++)
        {
            if(a[i]!=0)
            {
                a[j++]=a[i];
            }
        }
        
        for(int i=j;i<n;i++)
        {
            a[i]=0;
        }
    }
};