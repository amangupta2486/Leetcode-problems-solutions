class Solution {
public:
    vector<int> goodDaysToRobBank(vector<int>& a, int time) {
        
        int n=a.size();
        
        if(time==0)
        {
            vector<int> ans;
            
            for(int i=0;i<n;i++)
            {
                ans.push_back(i);
            }
            
            return ans;
        }
        
        vector<int> l(n,0);
        vector<int> r(n,0);
        
        for(int i=1;i<n;i++)
        {
            if(a[i]<=a[i-1])
            {
                l[i]=l[i-1]+1;
            }
        }
        
        for(int i=n-2;i>=0;i--)
        {
            if(a[i]<=a[i+1])
            {
                r[i]=r[i+1]+1;
            }
        }
        
          vector<int> ans;
        
//         for(int i=0;i<n;i++)
//         {
//             cout<<l[i]<<" ";
//         }
        
//         cout<<endl;
        
//         for(int i=0;i<n;i++)
//         {
//             cout<<r[i]<<" ";
//         }
        
//         cout<<endl;
        
        for(int i=time;i<n-time;i++)
        {
            if(l[i]>=time && r[i]>=time)
            {
                ans.push_back(i);
            }
        }
        
        return ans;
    }
};