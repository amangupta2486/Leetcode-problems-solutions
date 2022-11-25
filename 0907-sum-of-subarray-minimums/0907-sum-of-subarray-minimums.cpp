class Solution {
public:
    int sumSubarrayMins(vector<int>& a) {
        
        int n=a.size();
        int mod=1e9 +7;
        int ans=0;
        
        vector<int> l(n,0),r(n,0);
        stack<int> s;
        
        for(int i=0;i<n;i++)
        {
           while(!s.empty() && a[s.top()]>=a[i])
           {
               s.pop();
           }
            
           if(s.empty())
           {
               l[i]=-1;
           }
            
           else
           {
               l[i]=s.top();
           }
           
           s.push(i);
        }
        
        while(!s.empty())
        {
            s.pop();
        }
        
    
        for(int i=n-1;i>=0;i--)
        {
           while(!s.empty() && a[s.top()]>a[i])
           {
               s.pop();
           }
            
           if(s.empty())
           {
               r[i]=n;
           }
            
           else
           {
               r[i]=s.top();
               
           }
           
           s.push(i);
        }
        
        for(int i=0;i<n;i++)
        {
            //cout<<(i-l[i])<<" "<<(r[i]-i)<<" "<<a[i]<<endl;
            ans=(ans+(1ll*(i-l[i])*(r[i]-i)*a[i])%mod)%mod;
            //cout<<l[i]<<" ";
        }
        
//         cout<<endl;
        
//         for(int i=0;i<n;i++)
//         {
//             // cout<<(i-l[i])<<" "<<(r[i]-i)<<" "<<a[i]<<endl;
//             // ans+=(i-l[i])*(r[i]-i)*a[i];
//             cout<<l[i]<<" ";
//         }
        
//         cout<<endl;
        
//         for(int i=0;i<n;i++)
//         {
//             cout<<r[i]<<" ";
//         }
//         cout<<endl;
        
        return ans;
    }
};