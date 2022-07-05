class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& itr, vector<int>& nitr) {
        
        int n=itr.size();
        
        int f=1;
        
        for(int i=0;i<n;i++)
        {
            if(itr[i][0]>nitr[0])
            {
                f=0;
                itr.insert(itr.begin()+i,nitr);
                break;
            }
        }
        
        if(f)
        {
            itr.push_back(nitr);
        }
        vector<vector<int>> merge;
        
        for(auto x:itr)
        {
            if(merge.empty() || merge.back()[1]<x[0])
            {
                merge.push_back(x);
            }
            else
            {
                merge.back()[1]=max(merge.back()[1],x[1]);
            }
        }
        
        return merge;
    }
};