class Solution {
public:
    int scheduleCourse(vector<vector<int>>& a) {
        
//         sort(a.begin(),a.end());
        
        sort(a.begin(),a.end(),[&](auto &a,auto &b){
            return a[1]<b[1];
        });
        
        // for(auto i:a)
        // {
        //     cout<<i[0]<<","<<i[1]<<" ";
        // }
        
       // cout<<endl;
        priority_queue<int> q;
        
        int ans=0,c=0;
        int n=a.size();
        
        for(int i=0;i<n;i++)
        {
          if(a[i][0]>a[i][1])
          {
              continue;
          }
            
          if(ans+a[i][0]<=a[i][1])
          {
              q.push(a[i][0]);
              ans+=a[i][0];
              c++;
          }
          else if(!q.empty())
          {
              
              if(q.top()>a[i][0])
              {
                  ans-=q.top();
                  q.pop();
                  ans+=a[i][0];
                  q.push(a[i][0]);

              }
           
          }
        }
        
        // while(!q.empty())
        // {
        //     cout<<q.top()<<endl;
        //     q.pop();
        // }
        return c;
    }
};

/*
[[100,200],[200,1300],[1000,1250],[2000,3200]]
[[1,2]]
[[3,2],[4,3]]
[[5,5],[4,6],[2,6]]
[[2,5],[2,19],[1,8],[1,3]]
[[7,16],[2,3],[3,12],[3,14],[10,19],[10,16],[6,8],[6,11],[3,13],[6,16]]

Input
[[5,5],[4,6],[2,6]]
Output
1
Expected
2
*/