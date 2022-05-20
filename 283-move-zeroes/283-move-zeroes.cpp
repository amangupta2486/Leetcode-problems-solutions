class Solution {
public:
    void moveZeroes(vector<int>& a) {
        
        int n=a.size();
        
        vector<int> v;
        int c=0;
        
        for(auto i:a)
        {
            if(i!=0)
            {
                v.push_back(i);
            }
            else
            {
                c++;
            }
        }
        while(c--)
        {
            v.push_back(0);
        }
        
        a=v;
    }
};