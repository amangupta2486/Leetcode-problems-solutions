class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        
        horizontalCuts.push_back(0);
        horizontalCuts.push_back(h);
        
        verticalCuts.push_back(0);
        verticalCuts.push_back(w);
        
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        
        int n=horizontalCuts.size();
        int m=verticalCuts.size();
        
        long long len=0,brd=0;
        int mod=1e9 +7;
        
        for(int i=0;i<n-1;i++)
        {
            len=max(len,(long long)horizontalCuts[i+1]-horizontalCuts[i]);
            
        }
        
        for(int i=0;i<m-1;i++)
        {
            brd=max(brd,(long long)verticalCuts[i+1]-verticalCuts[i]);
        }
        
        //cout<<len<<" "<<brd<<endl;
        
        return (len*brd)%mod;
    }
};