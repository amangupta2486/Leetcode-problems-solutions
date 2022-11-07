class Solution {
public:
    string orderlyQueue(string s, int k) {
        
        int n=s.size();
        
        if(k==1)
        {
            string ans="";
        
        
            for(int i=0;i<n;i++)
            {
                string b=s.substr(i,n-i);
                b+= s.substr(0,i);
                
                if(i>1)
                ans=min(ans,b);
                
                else
                ans=b;
            }
            
            return ans;
        }
        
        sort(s.begin(),s.end());
        
        return s;
    }
};