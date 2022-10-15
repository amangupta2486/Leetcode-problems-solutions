class Solution {
public:
    int compress(vector<char>& a) {
        
        int n=a.size();
        
        vector<char> v;
        
        int c=1;
        
        for(int i=1;i<n;i++)
        {
            if(a[i]==a[i-1])
            {
                c++;
            }
            else
            {
                v.push_back(a[i-1]);
                
                 if(c>1)
                {
                    string s=to_string(c);

                    for(auto x:s)
                    {
                        v.push_back(x);
                    }
                }
                
                c=1;
            }
        }
        
        v.push_back(a[n-1]);
                
        if(c>1)
        {
            string s=to_string(c);

            for(auto x:s)
            {
                v.push_back(x);
            }
        }
        

        a.clear();
        for(int i=0;i<v.size();i++)
        {
            //cout<<v[i]<<" ";
            a.push_back(v[i]);
        }
        
        //cout<<v.size()<<endl;
        
        return v.size();
    }
};