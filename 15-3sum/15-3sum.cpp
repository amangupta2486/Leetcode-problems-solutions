class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        
        int len=arr.size();
        
        sort(arr.begin(),arr.end());
        
        vector<vector<int>> ans;
        
        for(int i=0;i<len-2;i++)
        {
            int j=i+1,k=len-1;
            
            while(j<k)
            {
                int s=arr[i]+arr[j]+arr[k];
                
                if(s<0)
                {
                    j++;
                }
                
                else if(s>0)
                {
                    k--;
                }
                
                else
                {
                    int x=arr[j];
                    int y=arr[k];
                    
                    ans.push_back({arr[i],x,y});
                    
                    while(j+1<k && arr[j+1]==x)
                    {
                        j++;
                    }
                    
                    while(k-1>j && arr[k-1]==y)
                    {
                        k--;
                    }
                    
                    j++;
                    k--;
                }
            }
            
            while(i+1<len && arr[i]==arr[i+1])
            {
                i++;
            }
        }
        
        return ans;
    }
};

// -4 -1 -1 0 1 2
