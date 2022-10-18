class Solution {
public:
    vector<int> goodDaysToRobBank(vector<int>& a, int t) {
        
        int n=a.size();
        
        vector<int> l(n+1,0),r(n+1,0);
        
        for(int i=1;i<n;i++)
        {
            if(a[i]<=a[i-1])
            {
                l[i]=l[i-1]+1;
            }
        }
        
        for(int i=n-2;i>=0;i--)
        {
            if(a[i]<=a[i+1])
            {
                r[i]=r[i+1]+1;
            }
        }
        
        vector<int> ans;
        
        for(int i=0;i<n;i++)
        {
            if(l[i]>=t && r[i]>=t)
            {
                ans.push_back(i);
            }
        }
        
        return ans;
    }
};