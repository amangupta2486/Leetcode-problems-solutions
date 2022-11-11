class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& in, vector<int>& y) {
        
        int n=in.size();
        
        int f=0;
        
        for(int i=0;i<n;i++)
        {
            if(y[0]<in[i][0])
            {
                //cout<<y[0]<<" "<<in[i][0]<<endl;
                in.insert(in.begin()+i,y);
                f=1;
                break;
            }
        }
        
        if(f==0)
        {
            in.insert(in.begin()+n,y);
        }
        
//         for(auto x:in)
//         {
//             cout<<"("<<x[0]<<","<<x[1]<<")"<<" ";
//         }
        
//         cout<<endl;
        
        vector<vector<int>> mr;
        
        for(auto x:in)
        {
            if(mr.empty() || mr.back()[1]<x[0])
            {
                mr.push_back(x);
            }
            else
            {
                mr.back()[1]=max(mr.back()[1],x[1]);
            }
        }
        
        return mr;
    }
};