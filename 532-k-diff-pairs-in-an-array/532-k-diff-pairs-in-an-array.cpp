class Solution {
public:
    int findPairs(vector<int>& a, int k) {
        
        int n=a.size();
        
        //unorder_map<vector<int>,int> m;
       set<vector<int>> m;
        
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(abs(a[i]-a[j])==k)
                {
                    vector<int> v;
                    v.push_back(a[i]);
                    v.push_back(a[j]);
                    if(v[0]>v[1])
                    {
                        swap(v[0],v[1]);
                    }
                    m.insert(v);
                    
                }
            }
        }
        
        return m.size();
    }
};