class Solution {
public:
    int findLongestChain(vector<vector<int>>& p) {
        
        int n=p.size();
        
        sort(p.begin(),p.end());
        
        int prev=p[0][1];
        
        int c=0;
        
        for(int i=1;i<n;i++)
        {
            if(p[i][0]>prev)
            {
                prev=p[i][1];
            }
            else
            {
                prev=min(p[i][1],prev);
                c++;
            }
        }
        
        return n-c;
    }
};