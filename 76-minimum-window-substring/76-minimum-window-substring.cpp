class Solution {
public:
    string minWindow(string s, string t) {
        
        int n=s.size();
        int m=t.size();
        
        map<char,int> mp,mp2;
        
        for(auto i:t)
        {
            mp2[i]++;
        }
        
        int formed=0,req=m;
        
        int j=0;
        int l=n;
        string ans="";
        
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
            
            if(mp[s[i]]<=mp2[s[i]])
            {
                formed++;
            }
            
            if(formed==req)
            {
                
                while(j<n && formed==req)
                {
                    if(l>i-j)
                    {
                        l=i-j;
                        ans=s.substr(j,i-j+1);
                       // cout<<ans<<" ";
                    }
                    
                    char ch=s[j];
                    mp[ch]--;
                    
                    if(mp[ch]<mp2[ch] && mp2[ch]>0)
                    {
                        formed--;
                    }
                    
                    j++;
                }
            }
        }
        
        cout<<endl;
        return ans;
    }
};