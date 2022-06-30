class Solution {
public:
    int minMoves2(vector<int>& a) {
        
        int n=a.size();
        
        sort(a.begin(),a.end());
        
        int sum=0;
        int ans=0;
        
        if(n%2==1)
        {
            int median=a[n/2];
        
            for(int i=0;i<n;i++)
            {
                ans+=abs(a[i]-median);
            }
        }
        
        else
        {
            int x=(n/2)-1;
            int median=a[x];
        
            for(int i=0;i<n;i++)
            {
                ans+=abs(a[i]-median);
            }
        }
        
        return ans;
    }
};
/*
Input
[1,0,0,8,6]
Output
16
Expected
14
*/