class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        int k=s1.size();
        int n=s2.size();
        
        if(k>n)
        {
            return false;
        }
        
        sort(s1.begin(),s1.end());
        unordered_map<char,int> m1;
        
        for(auto i:s1)
        {
            m1[i]++;
        }
        
        for(int i=0;i<n-k+1;i++)
        {
            string b=s2.substr(i,k);
            unordered_map<char,int> m2;
            
            for(auto j:b)
            {
                m2[j]++;
            }
            
            if(m1==m2)
            {
                return 1;
            }
        }
        
        return false;
    }
    
};