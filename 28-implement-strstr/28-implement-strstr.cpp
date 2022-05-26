class Solution {
public:
    int strStr(string a, string b) {
        
        int n=a.size();
        int m=b.size();
        int f=0,start=0;
        
        if(m>n)
        {
            return -1;
        }
        
        for(int i=0;i<n;i++)
        {
            if(a[i]==b[0] && n-i>=m)
            {
                f=1;
                cout<<i<<endl;
                start=i;
                int k=i;
                for(int j=0;j<m && k<n;k++,j++)
                {
                   // cout<<a[k]<<" "<<b[j]<<endl;
                    if(a[k]!=b[j])
                    {
                       // cout<<k<<" "<<j<<endl;
                      //  cout<<a[k]<<" "<<b[j]<<endl;
                       
                        f=0;
                        break;
                    }
                }            
               //  cout<<f<<endl;
            }
            if(f)
            {
               // cout<<f<<endl;
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