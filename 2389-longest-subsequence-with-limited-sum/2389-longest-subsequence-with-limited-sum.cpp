class Solution {
public:
    vector<int> answerQueries(vector<int>& a, vector<int>& q) {
        
        int n=a.size();
        sort(a.begin(),a.end());
        vector<int> ans;
        
        for(auto x:q)
        {
            int s=0,l=0;
            
            for(int i=0;i<n;i++)
            {
                if(s+a[i]<=x)
                {
                    s+=a[i];
                    l++;
                }
                else
                {
                    break;
                }
            }
            
            ans.push_back(l);
        }
        
        return ans;
    }
};