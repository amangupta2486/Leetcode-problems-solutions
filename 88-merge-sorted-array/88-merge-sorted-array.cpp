class Solution {
public:
    void merge(vector<int>& a, int n, vector<int>& b, int m) {
        
        int i=n-1,j=m-1;
        
        while(i>=0 && j>=0)
        {
            if(a[i]>=b[j])
            {
                a[i+j+1]=a[i];
                i--;
            }
            
            else if(a[i]<b[j])
            {
                a[i+j+1]= b[j];
                j--;
            }
        }
        
        while(j>=0)
        {
            a[i+j+1]=b[j];   
            j--;
        }
        
    }
};