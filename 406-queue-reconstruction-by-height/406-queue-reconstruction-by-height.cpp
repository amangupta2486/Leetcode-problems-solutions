class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& p) {
        
        //sort(p.rbegin(),p.rend());
        
        sort(p.begin(),p.end(),[&](auto &a,auto &b){
            return a[0]>b[0] || (a[0]==b[0] && a[1]<b[1] );
        });
        
        // for(auto i:p)
        // {
        //     cout<<i[0]<<" "<<i[1];
        //     cout<<endl;
        // }
        
        vector<vector<int>> ans;
        
        for(auto i:p)
        {
            int idx=i[1];
            
            ans.insert(ans.begin()+idx,i);
        }
        
        return ans;
    }
};