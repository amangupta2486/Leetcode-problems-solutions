class Solution {
public:
    vector<int> sortedSquares(vector<int>& a) {
        
        int n=a.size();
        
        int i=0,j=n-1;
        
        vector<int> v;
        
        while(i<=j)
        {
            if(a[i]*a[i]>=a[j]*a[j])
            {
                v.push_back(a[i]*a[i]);
                i++;
            }
            else
            {
                v.push_back(a[j]*a[j]);
                j--;
            }
        }
        
        reverse(v.begin(),v.end());
        
        return v;
    }
};