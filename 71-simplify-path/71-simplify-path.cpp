class Solution {
public:
    string simplifyPath(string p) {
        
        vector<string> v;
        
        stringstream ss(p);
        string s;
        
        while(getline(ss,s,'/'))
        {
            if(!v.empty() && s=="..")
            {
                v.pop_back();
            }
            
            else if(s!="." && s!="" &&s!="..")
            {
                v.push_back(s);
            }
        }
        
        string ans="";
        
        for(auto i:v)
        {
            ans+='/';
            ans+=i;
            
        }
        
        if(ans=="")
        ans+='/';
        
        return ans;
    }
};