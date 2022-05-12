class Solution {
public:
    
    vector<vector<int>> ans;
    
//     void solve(vector<int>& a,int i,int n,vector<int> v)
//     {
        
//         v.push_back(a[i]);
//         solve(a,i+1,n,v);
//         v.pop_back();
        
//         solve(a,i,n,v);
        
//     }
    vector<vector<int>> permute(vector<int>& a) {
        
        int n=a.size();
        vector<int> v;
        
        //solve(a,0,n,v);
        
        sort(a.begin(),a.end());
        
        do{
            ans.push_back(a);
            
        }while(next_permutation(a.begin(),a.end()));
        
        return ans;
    }
};