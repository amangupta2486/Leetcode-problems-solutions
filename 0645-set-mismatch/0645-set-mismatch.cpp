class Solution {
public:
    vector<int> findErrorNums(vector<int>& a) {
        
        int n=a.size();
        
        vector<int> v;
        
        for(int i=0;i<n;i++)
        {
            int idx=abs(a[i])-1;
            
            if(a[idx]>0)
            {
                a[idx]=-a[idx];
            }
            else
            {
                v.push_back(abs(a[i]));
            }
        }
        
        for(int i=0;i<n;i++)
        {
            if(a[i]>0)
            {
                v.push_back(i+1);
                break;
            }
        }
        
        return v;
    }
};