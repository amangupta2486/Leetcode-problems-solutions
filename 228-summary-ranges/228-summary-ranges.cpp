class Solution {
public:
    vector<string> summaryRanges(vector<int>& a) {
        
        int n=a.size();
        
        vector<string> v;
        
        if(n==0)
        {
            return v;
        }
        
        int b=a[0];
        int j=1,i=1;
        
        
        while(i<n)
        {
            if(b+j==a[i])
            {
                j++;
            }
            else
            {
                if(b==a[i-1])
                {
                    string s = to_string(b);
                    v.push_back(s);
                    b=a[i];
                }
                
                else
                {    
                    string s = to_string(b) + "->" + to_string(a[i-1]);
                    v.push_back(s);
                    b=a[i];
                }
                j=1;
            }
            i++;
        }
        
         if(b==a[i-1])
        {
            string s = to_string(b);
            v.push_back(s);
        }

        else
        {    
            string s = to_string(b) + "->" + to_string(a[i-1]);
            v.push_back(s);
            b=a[i];
        }
        
        return v;
    }
};