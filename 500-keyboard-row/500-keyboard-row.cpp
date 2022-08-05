class Solution {
public:
    vector<string> findWords(vector<string>& w) {
        
        string mp1="qwertyuiop",mp2="asdfghjkl",mp3="zxcvbnm";
        
        vector<string> ans;
        
        for(auto s:w)
        {
            int f=1;
            
            for(auto i:s)
            {
                char ch=tolower(i);

                if(mp1.find(ch)==string::npos)
                {
                    f=0;
                    break;
                }
            }
            
            if(f)
            {
                ans.push_back(s);
            }
            
            f=1;
            
            for(auto i:s)
            {
                char ch=tolower(i);
                
                if(mp2.find(ch)==string::npos)
                {
                    f=0;
                    break;
                }
            }
            
            if(f)
            {
                ans.push_back(s);
            }
            
            f=1;
            
            for(auto i:s)
            {
                char ch=tolower(i);
                
                if(mp3.find(ch)==string::npos)
                {
                    f=0;
                    break;
                }
            }
            
            //cout<<f<<" ";
            
            if(f)
            {
                ans.push_back(s);
            }
        }
        
        return ans;
    }
};