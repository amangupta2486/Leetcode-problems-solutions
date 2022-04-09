class Solution {
public:
    
    int v[100005];
    
    int numOfMinutes(int n, int h, vector<int>& m, vector<int>& t) {
        
        v[h]=h;
        
        for(int i=0;i<m.size();i++)
        {
            if(m[i]!=-1)
            {
                v[i]=m[i];
            }
        }
        
        int ans=0;
        
        for(int i=0;i<n;i++)
        {
            int mx=t[i];
            int x=i;
            
            while(x!=h)
            {
                x=v[x];
                 mx+=t[x];
            }
            ans=max(ans,mx);
        }
    
        return ans;
    }
};


// 7
// 6
// [1,2,3,4,5,6,-1]
// [0,6,5,4,3,2,1]
// Output
// 16
// Expected
// 21