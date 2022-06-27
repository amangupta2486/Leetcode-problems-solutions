class Solution {
public:
    int minPartitions(string s) {
        
        int n=s.size();
        
        char ch='0';
        
        for(int i=0;i<n;i++)
        {
            if(s[i]>ch)
            {
                ch=s[i];
            }
        }
        
        int ans=ch-'0';
        
        return ans;
    }
};