class Solution {
public:
    int minimumLines(vector<vector<int>>& s) {
        
        sort(s.begin(),s.end());
        
        int n=s.size();
        
        if(n==1)
        {
            return 0;
        }
        
        int ans=1;
        
        for(int i=2;i<n;i++)
        {
            long int x1=s[i][0];
            long int y1=s[i][1];
            long int x2=s[i-1][0];
            long int y2=s[i-1][1];
            long int x3=s[i-2][0];
            long int y3=s[i-2][1];
            
            
            
            long int d1=((x2-x1)*(y3-y2));
            long int d2=((x3-x2)*(y2-y1));
            
            if(d1!=d2)
            {
                ans++;
            }
        }
        
        return ans;
    }
};