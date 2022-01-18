class Solution {
public:
    bool canPlaceFlowers(vector<int>& a, int n) {

        int c=0;
        
        int m=a.size();
        
        for(int i=0;i<m;i++)
        {
            if(a[i]==0 && (i==0 || a[i-1]==0 )&& (i==m-1 || a[i+1]==0))
            {
                a[i]=1;
                c++;
            }
        }
        
        return c>=n;
    }
};