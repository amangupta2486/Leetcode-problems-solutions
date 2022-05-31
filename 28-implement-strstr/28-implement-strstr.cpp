class Solution {
public:
    int strStr(string a, string b) {
        
        int n=a.size();
        int m=b.size();
        
        if(n<m)
        {
            return -1;
        }
        
        int f=1,start=0;
        
        for(int i=0;i<n-m+1;i++)
        {
            int j=i+m-1;
            
            f=1;
            int h=0;
            
            for(int k=i;k<=j;k++)
            {
                if(a[k]!=b[h])
                {
                    f=0;
                    break;
                }
                h++;
            }
            if(f==1)
            {
                start=i;
                break;
            }
        }
        
        if(f)
        {
            return start;
        }
        
        return -1;
    }
};