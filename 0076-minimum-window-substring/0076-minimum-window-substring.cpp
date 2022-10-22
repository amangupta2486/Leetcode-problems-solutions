class Solution {
public:
    string minWindow(string s, string t) {
        
        int n=s.size();
        int m=t.size();
        
        unordered_map<char,int> mp,mp2;
        
        for(int i=0;i<m;i++)
        {
            //mp[t[i]-'a']++;
            mp2[t[i]]++;
        }
        
        int req=0;
        
        int ans=n;
        string res="";
        
        int j=0;
        
        
        for(int i=0;i<n;i++)
        {
            char ch=s[i];
            
            if(mp2[ch]>0 && mp[ch]<mp2[ch])
            {
                req++;
            }
            
            mp[ch]++;
            
            //cout<<req<<" ";
            
             while(req==m)
            {
                 //cout<<j<<" "<<i<<endl;
                 
                if((i-j+1)<=ans)
                {
                    ans=i-j+1;

                    res=s.substr(j,ans);
                }

                //cout<<s.substr(i-1,i-j+1)<<endl;

                int p=s[j];
                mp[p]--;

                if(mp2[p]>0 && mp[p]<mp2[p])
                {
                    req--;
                }

                j++;

            }
        }
        
        
        return res;
    }
};