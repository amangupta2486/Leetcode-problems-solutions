class Solution {
public:
    bool canArrange(vector<int>& a, int k) {
      
        int n=a.size();
        
        map<int,int> mp;
        
        for(int i=0;i<n;i++)
        {
            int x= ((a[i]%k)+k)%k;
            mp[x]++;
        }
        
        for(auto i:mp)
        {
            // cout<<i.first<<"="<<i.second<<" ";
            int x=i.first;
            
            if(x==0 && i.second%2==0)
            {
                continue;
            }
            
            if(i.second != mp[k-x])
            {
                return 0;
            }
        }
        
        //cout<<endl;
        
        return 1;
    }
};