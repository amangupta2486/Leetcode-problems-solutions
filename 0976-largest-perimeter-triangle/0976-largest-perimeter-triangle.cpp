class Solution {
public:
    int largestPerimeter(vector<int>& arr) {
        
        int n=arr.size();
        int ans=0;
        
        sort(arr.begin(),arr.end());
        
        for(int i=0;i<n-2;i++)
        {
            int a=arr[i],b=arr[i+1],c=arr[i+2];
            
            if(a+b>c)
            {
                ans=max(ans,a+b+c);
            }
        }
        
        return ans;
    }
};