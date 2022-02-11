class Solution {
public:
    string orderlyQueue(string s, int k) {
        
        int n=s.size();
        
        if(k>1)
        {
            sort(s.begin(),s.end());
            return s;
        }
        
        string r=s;
        
        for(int i=1;i<n;i++)
        {
            string str=s.substr(i,n-i)+s.substr(0,i);
            r= min(r,str);
        }
        
        return r;
    }
};