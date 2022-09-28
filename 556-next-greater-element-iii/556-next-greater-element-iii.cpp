class Solution {
public:
    int nextGreaterElement(int n) {
        
        vector<int> v;
        
        while(n>0)
        {
            v.push_back(n%10);
            
            n=n/10;
        }
        
        reverse(v.begin(),v.end());
        
        int i=v.size()-2;
        int f=0;
        
        for(;i>=0;i--)
        {
            //cout<<v[i]<<" ";
            if(v[i]<v[i+1])
            {
                f=1;
                break;
            }
        }
        
        
        if(f==1)
        {
            //cout<<f<<endl;
            
            for(int j=v.size()-1;j>i;j--)
            {
                if(v[j]>v[i])
                {
                    swap(v[j],v[i]);
                    break;
                }
            }
            
            sort(v.begin()+i+1,v.end());
            
            string s="";
            
            for(auto i:v)
            {
                s+=i+'0';
            }
            
            long a=stol(s);
            
            //cout<<a<<endl;
            
            if(a>INT_MAX)
            {
                return -1;
            }
            
            return a;
        }
        
        return -1;
    }
};