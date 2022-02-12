class Solution {
public:
    int ladderLength(string a, string b, vector<string>& w) {
        
        int n=w.size();
        
        map<string,int> m;
        
        for(auto i:w)
        {
            m[i]++;
        }
        
        if(m[b]==0)
        {
            return 0;
        }
        
        queue<pair<string,int>> q;
        
        q.push({a,0});
        
//         vector<vectorstring>> ans;
        
//         vector<string> v;
        
        int ans=INT_MAX;
        while(!q.empty())
        {
            auto r=q.front();
            q.pop();
            
            // v.push_back(p);
            int c=r.second;
            string p=r.first;
            
            c++;
            
            if(p==b)
            {
                ans=min(ans,c);        
            }
            
            for(int i=0;i<p.size();i++)
            {
                string s=p;
                
               for(int j=0;j<26;j++)
               {
                   s[i]='a'+j;
                   
                   //cout<<s<<" ";
                   if(m[s])
                   {
                       m[s]=0;
                       q.push({s,c});
                   }
               }
               
               
             }
        }
        
        if(ans!=INT_MAX)
        {
            return ans;
        }
        
        return 0;
    }
};