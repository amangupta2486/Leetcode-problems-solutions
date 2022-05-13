class Solution {
public:
    int longestPalindrome(string s) {
        
        int n=s.size();
        
        map<int,int> mp;
        
        for(auto i:s)
        {
            mp[i]++;
        }
        int ans=0;
        int f=0;
        
        for(auto i:mp)
        {
            int x=i.second;
            while(x>1)
            {
                x-=2;
                ans+=2;
            }
            
            if(x==1 && f==0)
            {
                f=1;
            }
        }
        
        return ans+f;
    }
};