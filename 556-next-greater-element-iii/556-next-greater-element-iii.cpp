class Solution {
public:
    int nextGreaterElement(int num) {
        
        vector<int> a;
            
        while(num>0)
        {
            int p=num%10;
           // cout<<p<<" ";
            a.push_back(p);
            num=num/10;
        }
        
        reverse(a.begin(),a.end());
 
        int n=a.size();
        int i=n-1;
        int f=0;
        
        for(i=n-2;i>=0;i--)
        {
            if(a[i]<a[i+1])
            {
               // cout<<3<<endl;
                f=1;
                break;
            }
        }
        
        if(f)
        {
            for(int j=n-1;j>i;j--)
            {
                if(a[j]>a[i])
                {
                    //cout<<3<<endl;
                    swap(a[j],a[i]);
                    break;
                }
            }
        }
        
        if(f)
        {
            sort(a.begin()+i+1,a.end());
            
            long long s=0;
            
            for(int i=0;i<n;i++)
            {
               // cout<<a[i]<<" ";
                s+=a[i];
                if(i!=n-1)
                {
                    s*=10;
                }
            }
            
            if(s>INT_MAX)
            {
                return -1;
            }
            
            return s;
        }
        
        return -1;
    }
};