class Solution {
public:
    vector<int> searchRange(vector<int>& a, int t) {
        
        int n=a.size();
        
        int st=-1,end=-1;
        
        for(int i=0;i<n;i++)
        {
            if(a[i]==t && st==-1)
            {
                st=i;
            }
            
            if(a[i]==t)
            {
                end=i;
            }
        }
        
        return {st,end};
    }
};