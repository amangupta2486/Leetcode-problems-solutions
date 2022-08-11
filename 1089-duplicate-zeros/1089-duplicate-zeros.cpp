class Solution {
public:
    void duplicateZeros(vector<int>& a) {
        
        int n=a.size();
        
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                a.insert(a.begin()+i+1,0);
                i++;
            }
        }
        
        while(a.size()>n)
        {
            a.pop_back();
        }
    }
};