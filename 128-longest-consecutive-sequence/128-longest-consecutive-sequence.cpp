class Solution {
public:
    int longestConsecutive(vector<int>& a) {
        
        int n=a.size();
        
        set<int> s;
        
        for(auto i:a)
        {
            s.insert(i);
        }
        
        int ans=0;
        
        for(auto i:s)
        {
            if(s.count(i-1)==0)
            {
                int l=0;
                int j=i;
                
                while(s.count(j)>0)
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