class Solution {
public:
    int maxOperations(vector<int>& a, int k) {
        
        int n=a.size();
        
        int ans=0;
        
        sort(a.begin(),a.end());
        
        int i=0,j=n-1;
        
        while(i<j)
        {
            int s=a[i]+a[j];
            if(s==k)
            {
                i++;
                j--;
                ans++;
            }
            
            else if(s>k)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
//         unordered_map<int,int> mp;
        
//         for(auto i:a)
//         {
//             mp[i]++;
//         }
        
//         int ans=0;
        
        
//         for(auto i:mp)
//         {
//             int num=i.second;
//             int count =i.first;
            
//             if(k-num==num)
//              {
//                  ans += count/2;
//              }
            
//             else if(mp.count(k-num))
//             {
//                 int Min=min(count,mp[k-num]);
//                 ans+=Min;
//                  mp[num]-=Min;
//                  mp[k-num]-=Min;
//             }
            
//         }
        
        return ans;
    }
};


/*
Input
[2,5,4,4,1,3,4,4,1,4,4,1,2,1,2,2,3,2,4,2]
3
Output
6
Expected
4

*/