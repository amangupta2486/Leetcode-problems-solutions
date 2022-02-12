class Solution {
public:
    int earliestFullBloom(vector<int>& a, vector<int>& b) {
        
        int n=a.size();
        
        if(n==1)
        {
            return a[0]+b[0];
        }
        
        vector<vector<int>> v;
        
        for(int i=0;i<n;i++)
        {
            v.push_back({b[i],a[i]});
        }
        
        sort(v.rbegin(),v.rend());
        
        // for(int i=0;i<n;i++)
        // {
        //     b[i]=v[i][0];
        //     a[i]=v[i][1];
        // }
        
        int curr=0;
        int t=0;
        
        
        for(int i=0;i<n;i++)
        {
           t=max(t,curr+v[i][1]+v[i][0]);
           
            curr+=v[i][1];
        }
        
        return t;
    }
};