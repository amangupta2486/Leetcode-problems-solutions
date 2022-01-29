class Solution {
public:
    int findKthLargest(vector<int>& a, int k) {
        
        priority_queue<int> q;
        
        int n=a.size();
        
//         for(int i=0;i<n;i++)
//         {
//             q.push(a[i]);
            
//             if(q.size()>k)
//             {
//                 q.pop_back();
//             }
//         }
        
//         // for(auto i:q)
//         // {
//         //     cout<<i<<" ";
//         // }
//         while(q.size()>1)
//         {
//              cout<<q.top()<<" ";
//             q.pop();
//         }
        
//         return q.top();
        
         sort(a.rbegin(),a.rend());
        
        return a[k-1];
    }
};