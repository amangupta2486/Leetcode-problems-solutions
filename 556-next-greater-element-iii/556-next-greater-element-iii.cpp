class Solution {
public:
    int nextGreaterElement(int a) {
        
        string s=to_string(a);
        
        int n=s.size();
        
        int i,f=0;
        
        for(i=n-2;i>=0;i--)
        {
            if(s[i]<s[i+1])
            {
                f=1;
                break;
            }
        }
        
        if(f)
        {
            for(int j=n-1;j>i;j--)
            {
                if(s[j]>s[i])
                {
                    swap(s[j],s[i]);
                    break;
                }
            }
            
            sort(s.begin()+i+1,s.end());
            
            long b=stol(s);
            //cout<<b<<endl;
            
            if(b>INT_MAX)
            {
                return -1;
            }
            
            return b;
        }
        
        return -1;
    }
};