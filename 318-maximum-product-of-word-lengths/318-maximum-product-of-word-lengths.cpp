class Solution {
public:
    int maxProduct(vector<string>& w) {
        
        int n=w.size();
        int ans=0;
        
        for(int i=0;i<n;i++)
        {
            unordered_map<char,int> mp1;
            int m=w[i].size();
            for(auto l:w[i])
            {
                mp1[l]++;
            }
            for(int j=i+1;j<n;j++)
            {
                string x=w[j];
                int f=1;
                int m2=x.size();
                //cout<<w[i]<<" "<<x<<endl;
                for(auto k:x)
                {
                    if(mp1.find(k)!=mp1.end())
                    {
                        f=0;
                        break;
                    }
                }
                
                if(f)
                {
                    //cout<<w[i]<<" "<<x<<endl;
                    ans=max(ans,m*m2);
                }
            }
        }
        
        return ans;
    }
};