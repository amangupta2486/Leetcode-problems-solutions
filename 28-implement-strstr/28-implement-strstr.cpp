class Solution {
public:
    int strStr(string a, string b) {
        
        int n=a.size();
        int m=b.size();
        
        if(m==0)
        {
            return 0;
        }
        
        for(int i=0;i<n-m+1;i++)
        {
            string s=a.substr(i,m);
            //cout<<s<<" ";
            if(s==b)
            {
                return i;
            }
        }
        
        return -1;
    }
};