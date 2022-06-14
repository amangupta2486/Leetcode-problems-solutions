class Solution {
public:
    
    vector<string> ans;
    unordered_set<string> mp;
    
    string solve(int i,int n,string s)
    {
        if(i==n)
        {
            if(mp.find(s)==mp.end())
            {
                return s;
            }
            
            return "";
        }
        
        string l=solve(i+1,n,s+'0');
        string r=solve(i+1,n,s+'1');
        
        if(l!="")
        {
            return l;
        }
        return r;
    }
    string findDifferentBinaryString(vector<string>& v) {
        
        int n=v.size();
        
        
        
        //unordered_set<string> mp;
        
        for(int i=0;i<n;i++)
        {
            mp.insert(v[i]);
        }
        
        return solve(0,n,"");
        
        // for(auto j:ans)
        // {
        //     if(mp.find(j)==mp.end())
        //     {
        //         return j;
        //     }
        // }
        // return "";
    }
};
/*
["0000000000001100","0000000000000010","0000000000000101","0000000000001001","0000000000000111","0000000000001010","0000000000001111","0000000000000110","0000000000000011","0000000000000001","1111111111111111","0000000000000100","0000000000000000","0000000000001101","0000000000001110","0000000000001011"]
*/