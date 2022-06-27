class Solution {
public:
    int maxRepeating(string s, string w) {
        
        int n=s.size();
        int m=w.size();
        
        int ans=0;
        
        
        for(int j=0;j<n-m+1;j++)
        {
           int c=0;
           for(int i=j;i<n-m+1;)
            {
                string b=s.substr(i,m);

                if(b==w)
                {
                    c++;
                    i+=m;
                }
                else
                {
                    ans=max(ans,c);
                    c=0;
                    i++;
                }
                ans=max(ans,c);
            } 
        }
         
        return ans;
    }
};
/*
"ababc"
"ab"
"ababc"
"ba"
"ababc"
"ac"
"aaabaaaabaaabaaaabaaaabaaaabaaaaba"
"aaaba"
"aaabaaaabaaabaaaabaaaabaaaabaaaaba"
"aaaba"
*/