class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& t) {
        
        int n=t.size();
        
        int ans=0;
        
        unordered_map<int,int> mp;
        vector<int> v;
        
        for(int i=1;i<=20;i++)
        {

           v.push_back(i*60);
        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<20;j++)
            {
                if(mp[v[j]-t[i]]>0)
                {
                    //cout<<t[i]<<" ";
                    ans+=mp[v[j]-t[i]];
                } 
            }
            mp[t[i]]++;
        }
        
       // cout<<endl;
        
        return ans;
    }
};