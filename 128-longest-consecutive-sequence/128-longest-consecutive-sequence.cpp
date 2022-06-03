class Solution {
public:
    int longestConsecutive(vector<int>& a) {
        
        int n=a.size();
        
        if(n==0)
        {
            return 0;
        }
        //set<int> s;
        unordered_map<int,int> s;
        
        for(int i=0;i<n;i++)
        {
            s[a[i]]=1;
        }
        int ans=1;
        sort(a.begin(),a.end());
        
        for(int i=0;i<n;i++)
        {
            if(s.find(a[i]-1)==s.end())
            {
                int j=a[i];
                int l=1;
                
                while(s.find(j+1)!=s.end())
                {
                    l++;
                    j++;
                }
                ans=max(ans,l);
            }
        }
        
        return ans;
    }
};