class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& p, int k) {
        
        priority_queue<vector<int>> q;
        vector<vector<int>> v;
        
        for(auto i:p)
        {
            int x=(i[0]*i[0])+(i[1]*i[1]);
            cout<<x<<" ";
            v.push_back({x,i[0],i[1]});
//             q.push({x,i});
            
//             if(q.size()>k)
//             {
//                 q.pop();
//             }
        }
        
        sort(v.begin(),v.end());
        
        vector<vector<int>> ans;
        
//         while(!q.empty())
//         {
//             auto r=q.top();
//             q.pop();
            
//             ans.push_back(p[r[1]]);
//         }
        for(auto i:v)
        {
            if(k==0)
                break;
            
            ans.push_back({i[1],i[2]});
            k--;
        }
        
        cout<<endl;
        
        return ans;
    }
};