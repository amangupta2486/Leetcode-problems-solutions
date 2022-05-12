class Solution {
public:
    int ladderLength(string b, string e, vector<string>& w) {

        unordered_map<string,int> mp;
        
        for(auto i:w)
        {
            mp[i]++;
        }

        if(mp[e]==0)
        {
            return 0;
        }
        
        queue<pair<string,int>> q;
        q.push({b,1});
        
        int ans=INT_MAX;
        
        while(!q.empty())
        {
            auto p=q.front();
            q.pop();

            string r=p.first;
            int c=p.second;

            if(r==e)
            {
                ans=min(ans,c);
            }

            for(int i=0;i<r.size();i++)
            {
                string b=r;

                for(int j=0;j<26;j++)
                {
                    b[i]='a'+j;
                    
                    //cout<<b<<endl;
                
                    if(mp.find(b)!=mp.end())
                    {

                        q.push({b,c+1});
                        mp.erase(b);
                    }
                }
                
                
            }
            
        }
        
        if(ans==INT_MAX)
        {
            return 0;
        }
        
        return ans;
    }
};