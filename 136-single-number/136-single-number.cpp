class Solution {
public:
    int singleNumber(vector<int>& a) {
        
        int n=a.size();
        
        int s=0;
        
        for(int i=0;i<n;i++)
        {
           s=s^a[i];
        }
        
        
        return s;
    }
};