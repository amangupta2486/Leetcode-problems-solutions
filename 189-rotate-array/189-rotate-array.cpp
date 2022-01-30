class Solution {
public:
    void rotate(vector<int>& a, int k) {
        
        int n=a.size();
        
       // int i=0,j=n-k;
        k=k%n;
 
        vector<int> v;
        
        for(int i=n-k;i<n;i++)
        {
            v.push_back(a[i]);
        }
        
        for(int i=0;i<n-k;i++)
        {
            v.push_back(a[i]);
        }
        
        for(int i=0;i<n;i++)
        {
            a[i]=v[i];
        }
        
        // while(j<n && i<j)
        // {
        //     swap(a[i],a[j]);       
        //     j++;
        //     i++;
        // }
        
    }
};