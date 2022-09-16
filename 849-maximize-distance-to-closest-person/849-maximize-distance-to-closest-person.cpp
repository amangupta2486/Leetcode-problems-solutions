class Solution {
public:
    int maxDistToClosest(vector<int>& a) {
        
        int n=a.size();
        
        vector<int> v;
        
        for(int i=0;i<n;i++)
        {
            if(a[i]==1)
            {
                v.push_back(i);
            }
        }
       
        int m=v.size();
              
        int ans=max(v[0]-0,n-v[m-1]-1);
   
        for(int i=0;i<m-1;i++)
        {
            int x= (v[i]+v[i+1])/2;
            
            //cout<<x-v[i]<<" "<<v[i+1]-x<<endl;
            
            ans=max({ans,min(x-v[i],v[i+1]-x)});
        }
        
        return ans;
    }
};