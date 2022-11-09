class Solution {
public:
    
    int numSubarrayProductLessThanK(vector<int>& a, int k) {
        
        int n=a.size();
        
         int ans=0;
        
         int i=0,j=0;
         int curr=1;
         
         while(i<n)
         {
             curr*=a[i];
             
             while(curr>=k && j<i)
             {
                 curr/=a[j];
                 j++;
             }
             
             if(curr<k)
             ans+=i-j+1;
             
             i++;
         }
        
         return ans;
    }
};
















