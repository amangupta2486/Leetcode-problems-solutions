class Solution {
public:
    char findTheDifference(string s, string t) {
        
        int n=s.length();
//         sort(s.begin(),s.end());
//         sort(t.begin(),t.end());
        
//         for(int i=0;i<n;i++)
//         {
//             if(s[i]!=t[i])
//             {
//                 return t[i];
//             }
//         }
        
        map<char,int> m1,m2;
        
        for(auto i:s)
        {
            m1[i]++;
        }
        
        for(auto i:t)
        {
            m2[i]++;
        }
        
        for(int i=0;i<n+1;i++)
        {
            if(m2[t[i]]>m1[t[i]])
            {
                return t[i];
            }
        }
        return t[n];
    }
};