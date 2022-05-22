class Solution {
public:
    int minimumLines(vector<vector<int>>& s) {
        
        sort(s.begin(),s.end());
        map<float,int> mp;
        
        int n=s.size();
        long double prev=INT_MAX;
        int ans=0;
        
        for(int i=0;i<n-1;i++)
        {
            long double x1=s[i][0];
            long double y1=s[i][1];
            long double x2=s[i+1][0];
            long double y2=s[i+1][1];
            
            long double d=((x2-x1)/(y2-y1));
            
             //cout<<prev<<" "<<d<<endl;
            
            if(prev==INT_MAX)
            {
                prev=d;
                ans++;
                continue;
            }
            
            if(prev!=d)
            {
                // cout<<prev<<" "<<d<<endl;
                ans++;
                prev=d;
            }
        }
        
        return ans;
    }
};