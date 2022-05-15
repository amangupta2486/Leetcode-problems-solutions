class Solution {
public:
    int largestCombination(vector<int>& a) {
        
        map<int,vector<int>> mp;
        map<int,int> m,m1;
        int n=a.size();
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<32;j++)
            {
                int f=1<<j;
                
                if(f&a[i])
                {
                    mp[j].push_back(a[i]);
                    m[j]++;
                }
            }
        }
        
        vector<vector<int>> v;
        
        int ans=0;
        for(auto i:m)
        {
            // v.push_back({i.second,i.first});
            ans=max(ans,i.second);
        }
        
        return ans;
        
        
        /*
        
        sort(v.begin(),v.end());
        
        for(auto i:a)
        {
            m1[i]=1;
        }
        
        int ans=0;
        
        
        int x=v[0][1];
        vector<int> p= mp[x];
        map<int,int> z;
        
        for(auto i:p)
        {
            z[i]++;
        }
        
        for(auto i:mp)
        {
            auto q=i.second;
            int f=1;
            
            for(auto j:i.second)
            {
                if(z[j]==0)
                {
                    f=0;
                    break;
                }
            }
            if(f==1)
            {
                ans++;
            }
        }
        */
        // for(auto i:v)
        // {
        //     for(auto j:mp[i[1]])
        //     {
        //         if(m1[j]>0)
        //         {
        //             cout<<j<<" ";
        //             ans++;
        //             m1[j]=0;
        //             break;
        //         }
        //     }
        // }
        
        
        
       // return ans;
    }
};