class Solution {
public:
    int maximumUniqueSubarray(vector<int>& a) {
      
        int n=a.size();
        map<int,int> mp;
        int ans=0;
        int j=0;
        
        vector<int> p(n+1,0);
        
        for(int i=1;i<=n;i++)
        {
            p[i]=p[i-1]+a[i-1];
        }
        
        for(int i=0;i<n;i++)
        {
            mp[a[i]]++;
            
            while(mp[a[i]]>1)
            {
                mp[a[j]]--;
                j++;
            }
            //cout<<i<<" "<<j<<endl;
            if(ans<p[i+1]-p[j])
            {  
            //  cout<<p[i+1]<<" "<<p[j]<<endl;
              ans=max(ans,p[i+1]-p[j]);
            }
        }
        
        return ans;
    }
};