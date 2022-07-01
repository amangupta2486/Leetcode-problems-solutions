class Solution {
public:
    
    set<string> mp;
    int n;
    int ans=0;
    
    int dp[305];
    
    int solve(int j,string &s)
    {

        if(j==n)
        {
            return 1;
        }
        
        if(dp[j]!=-1)
        {
            return dp[j];
        }

       string t="";
        
        for(int i=j;i<n;i++)
        {
            t+=s[i];
            //string t=s.substr(j,i-j);
            if(mp.find(t)!=mp.end() && solve(i+1,s)){
                return dp[j]=1;
            }
        }
        
        return dp[j]=0;
    }
    
    bool wordBreak(string s, vector<string>& w) {
        
        n=s.size();
        
        memset(dp,-1,sizeof(dp));
        
        for(auto x:w)
        mp.insert(x);
        
        return solve(0,s);

    }
};
/*
"bccdbacdbdacddabbaaaadababadad"
["cbc","bcda","adb","ddca","bad","bbb","dad","dac","ba","aa","bd","abab","bb","dbda","cb","caccc","d","dd","aadb","cc","b","bcc","bcd","cd","cbca","bbd","ddd","dabb","ab","acd","a","bbcc","cdcbd","cada","dbca","ac","abacd","cba","cdb","dbac","aada","cdcda","cdc","dbc","dbcb","bdb","ddbdd","cadaa","ddbc","babb"]
*/