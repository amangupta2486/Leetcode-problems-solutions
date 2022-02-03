class Solution {
public:
    int fourSumCount(vector<int>& a, vector<int>& b, vector<int>& c, vector<int>& d) 
    {
        int ans=0;
        
        unordered_map<long long,int> mp;
        
        for(int k=0;k<c.size();k++)
        {
        for(int l=0;l<d.size();l++)
        {
            mp[d[l]+c[k]]++;
        }
        }
        
        for(int i=0;i<a.size();i++)
        {
            for(int j=0;j<b.size();j++)
            {
                // for(int k=0;k<c.size();k++)
                // {
                    // for(int l=0;l<d.size();l++)
                    // {
                        long long x=-1*(a[i]+b[j]);
                    
                        if(mp[x])
                        {
                            ans+=mp[x];
                        }
                    //}
                //}
            }
        }
        
        return ans;
    }
};