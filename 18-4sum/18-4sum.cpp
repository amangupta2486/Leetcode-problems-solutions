class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& a, int b) {
        
    int n=a.size();
    vector<vector<int>> ans;
    
        if(n<4)
        {
            return ans;
        }
        
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int l=j+1;
            int r=n-1;
            int k=b-a[i]-a[j];

            while(l<r)
            {
                int s=a[l]+a[r];

                if(s<k)
                {
                    l++;
                }
                else if(s>k)
                {
                    r--;
                }

                else
                {
                    int x=a[l];
                    int y=a[r];

                    ans.push_back({a[i],a[j],a[l],a[r]});

                    while(l<r && a[l]==x)
                    {
                        l++;
                    }
                    while(l<r && a[r]==y)
                    {
                        r--;
                    }

                }
            }

            while(j+1<n && a[j]==a[j+1])
            {
                j++;
            }
        }

        while(i+1<n && a[i]==a[i+1])
        {
            i++;
        }
    }

    return ans;
    }
};