class Solution {
public:
    int minSwaps(vector<int>& a) {
        
        int n=a.size();
        
        n=2*n;
        
        vector<int> b=a;
        
        for(auto i:a)
        {
            b.push_back(i);
        }
        
        vector<int> p(n+1,0);
    
        int c=0;

        for(int i=1;i<=n;i++)
        {
            if(b[i-1]==1)
            {
                p[i]=p[i-1]+1;
                c++;
            }
            else
            {
                p[i]=p[i-1];
            }
        }
        
        c=c/2;
        
        // if(c==0)
        // {
        //     return -1;
        // }

        int i=0,j=c,ans=c;

        while(j<=n)
        {
            int x=p[j]-p[i];

            //cout<<p[j]<<" "<<p[i]<<" "<<c-x<<endl;

            ans=min(ans,c-x);

            i++;
            j++;
        }

        return ans;
    }
};