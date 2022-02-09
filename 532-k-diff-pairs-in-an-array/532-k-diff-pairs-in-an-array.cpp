class Solution {
public:
    int findPairs(vector<int>& a, int k) {
        
        int n=a.size();
        
        unordered_map<int,int> m;
        
        for(int i=0;i<n;i++)
        {
           m[a[i]]++;
        }
        
        int c=0;
        
        for(auto i:m)
        {
           if((m.count(i.first+k) && k>0) || (k==0 and i.second>1))
           {
               c++;
           }
        }
        
        return c;
    }
};