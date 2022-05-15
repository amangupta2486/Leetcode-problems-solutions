class Solution {
public:
    int largestCombination(vector<int>& a) {

        map<int,int> m;
        int n=a.size();
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<32;j++)
            {
                int f=1<<j;
                
                if(f&a[i])
                {
                    m[j]++;
                }
            }
        }
        
        int ans=0;
        for(auto i:m)
        {
   
            ans=max(ans,i.second);
        }
        
        return ans;
    }
};