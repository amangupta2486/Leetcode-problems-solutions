class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& a) {
        
        int n=a.size();
        
        for(int i=0;i<n;i++)
        {
            int ind=abs(a[i])-1;
            
            if(a[ind]>0)
            {
                a[ind]=-a[ind];
            }
        }
        
        vector<int> v;
        
        for(int i=0;i<n;i++)
        {
            if(a[i]>0)
            {
                v.push_back(i+1);
            }
        }
        
        return v;
    }
};