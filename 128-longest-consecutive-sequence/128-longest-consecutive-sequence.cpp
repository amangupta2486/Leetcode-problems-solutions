class Solution {
public:
    int longestConsecutive(vector<int>& a) {
        
        int n=a.size();
        
        unordered_set<int> s;
        
        for(auto i:a)
        {
            s.insert(i);
        }
        
        int ans=0;
        
        for(int i=0;i<n;i++)
        {
            if(s.count(a[i]-1)==0)
            {
                int j=a[i];
                int l=1;
                
                while(s.count(j+1)>0)
                {
                    j++;
                    l++;
                }
                
                ans=max(ans,l);
            }
        }
        
        return ans;
    }
};