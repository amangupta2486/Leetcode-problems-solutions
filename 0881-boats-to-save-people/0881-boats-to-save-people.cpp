class Solution {
public:
    int numRescueBoats(vector<int>& a, int l) {
        
        int n=a.size();
        
        sort(a.begin(),a.end());
        
        int i=0,j=n-1,cnt=0;
        
        while(i<=j)
        {
            if(a[i]+a[j]<=l && i!=j)
            {
                i++;
                j--;
                cnt++;
            }
            
            else
            {
                j--;
                cnt++;
            }
        }
        
        return cnt;
    }
};