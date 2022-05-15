#include<bits/stdc++.h>

class Solution {
public:
    int calPoints(vector<string>& s) {
        
        int n=s.size();
        
        vector<int> v;
        
        for(int i=0;i<n;i++)
        {
            if(s[i]=="C")
            {
                v.pop_back();
            }
            else if(s[i]=="D")
            {
                int m=v.size();
                int c=v[m-1];
                
                v.push_back(2*c);
            }
            else if(s[i]=="+")
            {
                int m=v.size();
                int b=v[m-2];
                int c=v[m-1];
                
                v.push_back(b+c);
            }
            else
            {
                int b=stoi(s[i]);
                v.push_back(b);
            }
        }
        
        int ans=0;
        
        for(auto i:v)
        {
            ans+=i;
        }
        return ans;
    }
};