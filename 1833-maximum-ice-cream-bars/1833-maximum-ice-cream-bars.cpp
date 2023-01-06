class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        
        sort(costs.begin(),costs.end());
        
        int n=costs.size();
        int s=0,cnt=0;
        
        for(int i=0;i<n;i++)
        {
            if(s+costs[i]<=coins)
            {
                s+=costs[i];
                cnt++;
            }
        }
        
        return cnt;
    }
};