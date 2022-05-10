class Solution {
public:
    vector<string> reorderLogFiles(vector<string>& l) {
        
        vector<vector<string>> a,b;
        
        for(auto x:l)
        {
            int n=x.length();
            string s="";
            int c=0;
            
            for(int i=0;i<n;i++)
            {
                if(x[i]!=' ')
                {
                    
                }
                else
                {
                    // c++;
                    // if(c==2)
                    // {
                        s=x.substr(i+1,n-i);
                       // cout<<s<<endl;
                        break;
                    //}
                }
            }
            
            if(s[0]<=57)
            {
                a.push_back({s,x});
            }
            else
            {
                b.push_back({s,x});
            }
        }
        
        vector<string> ans;
        
        //sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        
        for(auto i:b)
        {
            ans.push_back(i[1]);
        }
        for(auto i:a)
        {
            ans.push_back(i[1]);
        }
        
        return ans;
    }
};