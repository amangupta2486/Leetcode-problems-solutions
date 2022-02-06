class Solution {
public:
    int removeDuplicates(vector<int>& a) {
        
        int n=a.size();
        
        int j=0;
        
        for(int i=0;i<n;i++)
        {
            if(j<2 || a[i]>a[j-2])
            {
                a[j]=a[i];
                j++;
            }
        }
        
        return j;
    }
};