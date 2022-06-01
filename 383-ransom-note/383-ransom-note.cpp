class Solution {
public:
    bool canConstruct(string r, string mg) {
        
        map<char,int> mp1,mp2;
        
        int n=r.size();
        int m=mg.size();
        
        for(int i=0;i<n;i++)
        {
            mp1[r[i]]++;
        }
        
        for(int j=0;j<m;j++)
        {
            mp2[mg[j]]++;
        }
        
        for(int i=0;i<n;i++)
        {
            if(mp2[r[i]]<mp1[r[i]])
            {
                return 0;
            }
        }
        
        return 1;
    }
};