class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans;
        
        if(n%2==0)
        {
            int m=0,i=1;
            while(m<n)
            {
                ans.push_back(-i);
                ans.push_back(i);
                i++;
                m+=2;
            }
        }
        
        else
        {
            int m=1,i=1;
            ans.push_back(0);
            while(m<n)
            {
                ans.push_back(-i);
                ans.push_back(i);
                i++;
                m+=2;
            }
        }
        
        return ans;
    }
};