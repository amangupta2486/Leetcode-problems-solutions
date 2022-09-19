class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& paths) {
        
        vector<vector<string>> ans;
        
        map<string,vector<string>> mp;
        
        for(auto str:paths)
        {
            stringstream ss(str);
        
            string s="";
            
            int c=0;
            string root="";
            
            while(getline(ss,s,' '))
            {
                //cout<<s<<endl;
                
                if(c==0)
                {
                    c=1;
                    root=s;
                }
                
                else
                {
                    string t="";
                    string p="";
                    
                    int n=s.size();
                    
                    for(int i=0;i<n;i++)
                    {
                        if(s[i]!='(')
                        {
                            t+=s[i];
                        }
                        else
                        {
                            i++;
                            while(i<n && s[i]!=')')
                            {
                                p+=s[i];
                                i++;
                            }
                            break;
                        }
                    }
                    
                    string temp="";
                    temp+=root;
                    temp+="/";
                    temp+=t;
                    
                    mp[p].push_back(temp);
                }
            }
        }
        
        for(auto x:mp)
        {
            if(x.second.size()>1)
            ans.push_back(x.second);
        }
        
        return ans;
    }
};