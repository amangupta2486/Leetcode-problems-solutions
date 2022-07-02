class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int n=s.size();
        
        int j=0;
        unordered_map<char,int> mp;
        
        int ans=0;
        
        for(int i=0;i<n;i++)
        {
            char r=s[i];
            mp[r]++;
            
            while(mp[r]>1)
            {
                char l=s[j];
                mp[l]--;
                j++;
            }
            
            ans=max(ans,i-j+1);
        }
        
        return ans;
    }
};