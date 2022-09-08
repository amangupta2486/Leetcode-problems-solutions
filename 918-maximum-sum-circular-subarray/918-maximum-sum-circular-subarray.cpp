class Solution {
public:
    int maxSubarraySumCircular(vector<int>& a) {
        
        int n=a.size();
        
        int currMax=a[0],currMin=a[0],total=a[0],Max=a[0],Min=a[0];
        
        for(int i=1;i<n;i++)
        {
            currMin=min(a[i],currMin+a[i]);
            currMax=max(a[i],currMax+a[i]);
            
            Max=max(Max,currMax);
            Min=min(Min,currMin);
            
            total+=a[i];
        }
        
        return Max>0 ? max(Max,total-Min) : Max;
    }
};