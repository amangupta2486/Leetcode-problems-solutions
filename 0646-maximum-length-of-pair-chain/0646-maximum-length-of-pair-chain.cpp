class Solution {
public:
    int findLongestChain(vector<vector<int>>& p) {
        
        int n=p.size();
        
        sort(p.begin(),p.end(),[&](auto &a,auto &b){
            return a[1]<b[1];
        });
        
        int ans=0;
        
        for(int i=0;i<n;i++)
        {
            int c=1; 
            int prev=i;
            
            for(int j=i+1;j<n;j++)
            {
                if(p[prev][1]<p[j][0])
                {
                    prev=j;
                    c++;
                }
            }
            
            ans=max(ans,c);
        }
        
        return ans;
    }
};