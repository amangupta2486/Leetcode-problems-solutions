class Solution {
public:
    vector<int> twoSum(vector<int>& a, int t) {
        int n=a.size();
        
        map<int,int> m;
        
        for(auto i:a)
        {
            m[i]++;
        }
        
        vector<int> v;
        
        for(int i=0;i<n;i++)
        {
            if(2*a[i]==t && m[a[i]]<2)
            {
                continue;
            }
            
            if(m[t-a[i]]>0)
            {
                v.push_back(i);
            }
        }
        
        return v;
    }
};