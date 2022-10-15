class Solution {
public:
    vector<int> decompressRLElist(vector<int>& a) {
        
        int n=a.size();
        
        vector<int> v;
        
        for(int i=0;i<n;i+=2)
        {
            int c=a[i];
            
            while(c>0)
            {
                v.push_back(a[i+1]);
                c--;
            }
        }
        
        return v;
    }
};