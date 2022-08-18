class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int k) {
        
        sort( boxTypes.begin(), boxTypes.end(),[&](auto &a,auto &b){
            return a[1]>b[1];
        });
        
        int n= boxTypes.size();
        
        int ans=0;
        
        for(int i=0;i<n && k>0;i++)
        {
            int c= boxTypes[i][0];
            
            if(c<=k)
            {
                k-=c;
                ans+=c* boxTypes[i][1];
            }
            else
            {
                ans+=k* boxTypes[i][1];
                break;
            }
        }
        
        return ans;
    }
};