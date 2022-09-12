class Solution {
public:

    int bagOfTokensScore(vector<int>& a, int p) {
        
        int n=a.size();
        
        if(n==0)
        {
            return 0;
        }
        
        sort(a.begin(),a.end());
        
        int i=0,j=n-1;
        
        int s=0,ans=0;
        
        if(a[0]>p)
        {
            return 0;
        }
        
        while(i<=j && (s>0 || p>=a[i]))
        {

            while(i<=j && p>=a[i])
            {
                s++;
                p-=a[i];
                i++;
            }
            
            ans=max(ans,s);
            
            if(i<=j && s>0)
            {
                s--;
                p+=a[j];
                j--;
            }        
        }
        
        return ans;
    }
};