class Solution {
public:
    int minOperations(vector<string>& logs) {
        
        stack<string> s;
        string p="";
        
        for(int i=0;i<logs.size();i++)
        {
            string t=logs[i];
            int m=t.size();
            string curr="";
            for(int j=0;j<m;j++)
            {
                if(t[j]!='/')
                {
                    curr+=t[j];
                }
            }
            
            if(curr==".")
            {
                continue;
            }
            else if(curr=="..")
            {
                if(!s.empty())
                {
                    s.pop();
                }
            }
            
            else
            {
                s.push(curr);
            }
        }
        
        return s.size();
        
    }
};