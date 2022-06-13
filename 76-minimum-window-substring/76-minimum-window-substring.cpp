class Solution {
public:
    string minWindow(string s, string t) {
        
        if(s=="" || t=="" )
        {
            return "";
        }
        
        int n=s.size();
        int m=t.size();
        
        if(n<m)
        {
            return "";
        }
        if(s==t)
        {
            return s;
        }
        map<char,int> mp,mp2;
        
        for(auto i:t)
        {
            mp[i]++;
        }
        int fsize=mp.size();
        int f=0;
        
        int j=0;
        string ans=s,d=s;
        ans+=s;
        d+=s;
        
        //cout<<mp.size()<<endl;
        
        for(int i=0;i<n;i++)
        {
            //cout<<f<<" ";
            mp2[s[i]]++;
            
            if(mp2[s[i]]==mp[s[i]] && mp[s[i]]>0)
            {
                f++;
            }
            
            while(f==fsize && j<=i)
            {

                string b=s.substr(j,i-j+1);
                //cout<<b<<endl;
                if(b.size()<ans.size())
                {
                    ans=b;
                }

                mp2[s[j]]--;
                if(mp2[s[j]]<mp[s[j]] &&  mp[s[j]]>0)
                {
                    f--;
                }
                j++;
               
            }
        }
        
        if(ans==d)
        {
            return "";
        }
        
        return ans;
    }
};

/*
"acbbaca"
"aba"
*/