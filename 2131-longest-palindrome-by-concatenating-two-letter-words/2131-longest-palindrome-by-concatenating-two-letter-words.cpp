class Solution {
public:
    int longestPalindrome(vector<string>& w) {
        
        int n=w.size();
        
        unordered_map<string,int> mp;
        
        for(auto x:w)
        {
            mp[x]++;
        }
        
        int mx=0,ans=0;
        
        for(int i=0;i<n;i++)
        {
            string x=w[i];
            int m=x.size();
            reverse(x.begin(),x.end());
            
            
            if(w[i]==x)
            {
                int c=mp[x];
                
                if(c%2==0)
                {
                    ans+=c*x.size();
                }
                
                else
                {
                    ans+=(c-1)*x.size();
                    
                    mx=max(mx,m);
                }
                
                mp[w[i]]=0;
            }
            
            else
            {
                if(mp[w[i]]>0 && mp[x]>0)
                {
                    ans+=2*x.size();
                    mp[w[i]]--;
                    mp[x]--;
                }
            }
            
        }
        
        ans+=mx;
        
        return ans;
    }
};