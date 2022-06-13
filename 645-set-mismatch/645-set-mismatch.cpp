class Solution {
public:
    vector<int> findErrorNums(vector<int>& a) {
        
        int n=a.size();
        
        vector<int> v;
        
        for(int i=0;i<n;i++)
        {

            if(a[abs(a[i])-1]>0)
            {
                a[abs(a[i])-1]=-1*a[abs(a[i])-1];
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
            }
        }
        
        return v;
    }
};