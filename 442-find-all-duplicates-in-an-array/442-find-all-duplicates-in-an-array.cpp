class Solution {
public:
    vector<int> findDuplicates(vector<int>& a) {
        
        int n=a.size();
        
        vector<int> ans;
        
        for(int i=0;i<n;i++)
        {
            int ind=abs(a[i])-1;
            
            if(a[ind]>0)
            {
                a[ind]=-a[ind];
            }
            else
            {
                ans.push_back(abs(a[i]));
            }
        }
        
        return ans;
    }
};