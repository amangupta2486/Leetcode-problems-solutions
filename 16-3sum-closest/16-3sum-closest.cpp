class Solution {
public:
    int threeSumClosest(vector<int>& a, int target) {
        
        int n=a.size();
        vector<vector<int>> ans;
        
        sort(a.begin(),a.end());
        
        int sum=0;
        int diff=INT_MAX;
        
        for(int i=0;i<n-2;i++)
        {
            int j=i+1,k=n-1;
            
            while(j<k)
            {
                int s=a[i]+a[j]+a[k];
                
                if(diff>abs(target-s))
                {
                    diff=abs(target-s);
                    sum=s;
                }
                if(s>target)
                {
                    k--;
                }
                
                if(s<target)
                {
                    j++;
                }
                
                if(s==target)
                {
                    diff=0;
                    sum=s;
                    //ans.push_back({a[i],a[j],a[k]});
                    int x=a[j];
                    int y=a[k];
                    
                    while(j+1<k && a[j+1]==x)
                    {
                        j++;
                    }
                    while(j<k-1 && a[k-1]==y)
                    {
                        k--;
                    }
                    
                    j++;
                    k--;
                }
            }
            
            while(i+1<n-2 && a[i+1]==a[i])
            {
                i++;
            }
        }
        
        return sum;
    }
};

/*
Input
[1,1,1,0]
-100
Output
3
Expected
2
*/