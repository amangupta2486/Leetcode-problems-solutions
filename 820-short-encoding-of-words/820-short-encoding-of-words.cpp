class Solution {
public:
    int minimumLengthEncoding(vector<string>& w) {
        
        int n=w.size();
        
        sort(w.begin(),w.end(),[&](auto &a,auto &b){
            return a.size()>b.size();
        });
        
        string ans="";
        
        for(int i=0;i<n;i++)
        {
            if(ans.find(w[i]+'#')==string::npos)
            {
                ans.append(w[i]+'#');
            }
        }
        
        return ans.size();
    }
};