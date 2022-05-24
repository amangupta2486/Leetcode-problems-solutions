class Solution {
public:
    string reorganizeString(string s) {
        
        vector<int> v(26,0);
        int n=s.size();
        
        for(int i=0;i<n;i++)
        {
            v[s[i]-'a']++;
        }
        
        priority_queue<pair<int,int>> q;
        
        int mx=0;
        
        for(int i=0;i<26;i++)
        {
            if(v[i]>0)
           q.push({v[i],i});
            
           mx=max(mx,v[i]);
        }
        
        int sum=0;
        for(int i=0;i<26;i++)
        {
            sum+=v[i];
        }
        
        auto r=q.top();
        int c=r.first;
        
        if(mx-1>sum-mx)
        {
           // cout<<c<<" "<<sum<<endl;
            return "";
        }
        
        string ans="";
        
        while(q.size()>1)
        {
            auto p=q.top();
            q.pop();
            
            int x=p.first;
            char ch=p.second+'a';
            x--;
            
            auto p1=q.top();
            q.pop();
            
            int x1=p1.first;
            char ch1=p1.second+'a';
            x1--;
            
            ans+=ch;
            
            if(x>0)
            q.push({x,p.second});
            
            ans+=ch1;
            
            if(x1>0)
            q.push({x1,p1.second});
        }
        
        if(q.size()>0)
            ans+=q.top().second+'a';
        
        return ans;
    }
};