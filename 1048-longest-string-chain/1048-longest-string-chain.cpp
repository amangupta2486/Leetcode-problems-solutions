class Solution {
public:
    int longestStrChain(vector<string>& words) {
        
        int n=words.size();
        unordered_map<string,int> dp;
        
        sort(words.begin(),words.end(),[&](auto &a,auto &b){
            return a.size()<b.size();
        });
        
        int ans=0;
        
        for(int i=0;i<n;i++)
        {
            string b=words[i];
            dp[b]=1;
            int m=b.size();
            for(int j=0;j<b.size();j++)
            {
                string r = b.substr(0,j)+b.substr(j+1,m-j);
               // cout<<r<<" ";
                dp[b]=max(dp[b],1+dp[r]);
            }  
            ans=max(ans,dp[b]);
        }
        
        return ans;
    }
};