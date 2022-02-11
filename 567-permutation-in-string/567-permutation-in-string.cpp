class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        int k=s1.size();
        int n=s2.size();
        
        if(k>n)
        {
            return false;
        }
        
        vector<int> m1(26,0);
        
        for(auto i:s1)
        {
            m1[i-'a']++;
        }
        
        for(int i=0;i<n-k+1;i++)
        {
            string b=s2.substr(i,k);
            vector<int> m2(26,0);
            
            for(auto j:b)
            {
                m2[j-'a']++;
            }
            
            if(m1==m2)
            {
                return 1;
            }
        }
        
        return false;
    }
    
};