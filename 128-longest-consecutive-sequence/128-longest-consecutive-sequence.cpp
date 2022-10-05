class Solution {
public:
    int longestConsecutive(vector<int>& a) {
        
        int n=a.size();
        
        set<int> s;
        
        for(auto x:a)
        {
            s.insert(x);
        }
        
        int ans=0;
        
        for(int i=0;i<n;i++)
        {
            if(s.find(a[i]-1)==s.end())
            {
                int l=1;
                int j=a[i];
                
                while(s.find(j+1)!=s.end())
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