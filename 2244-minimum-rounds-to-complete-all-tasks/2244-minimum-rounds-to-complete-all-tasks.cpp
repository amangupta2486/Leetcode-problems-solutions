class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        
        map<int,int> mp;
        
        for(auto x:tasks)
        {
            mp[x]++;
        }
        
        int ans=0;
        int s=0;
        
        for(auto x:mp)
        {
            int c=x.second;
            //cout<<x.first<<" "<<x.second<<endl;
            
            while(c>0)
            {
                if(c%3==0)
                {
                    ans+=c/3;
                    c=0;
                }
                else if(c%3==2)
                {
                    ans+=c/3;
                    c=0;
                    ans++;
                }
                
                else
                {
                    ans++;
                    c-=2;
                    
                     while(c>0 && c%2==0 && c%3!=0)
                    {
                        c-=2;
                        ans++;
                    }
                    
                }
            }
            
            if(c==-1)
            {
                return -1;
            }
            
            // cout<<ans-s<<endl;
            // s+=ans;
        }
        
        return ans;
    }
};