class Solution {
public:
    int removeDuplicates(vector<int>& a) {
        
        int n=a.size();
        int j=0;
        
        for(int i=1;i<n;i++)
        {
            if(a[j]!=a[i])
            {
                j++;
                a[j]=a[i];
            }
        }
        
        return j+1;
    }
};