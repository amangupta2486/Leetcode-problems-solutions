
class Solution {
public:
    long long minimumFuelCost(vector<vector<int>>& roads, int seats) {
        
        int n=roads.size();
        
        vector<int> people(n+1,1),degree(n+1,0);
        people[0]=0;
        
        vector<int> v[n+1];
        
        for(auto x:roads){
            v[x[0]].push_back(x[1]);
            v[x[1]].push_back(x[0]);
            
            degree[x[0]]++;
            degree[x[1]]++;
        }
        
        queue<int> q;
        
        for(int i=1;i<n+1;i++){
            if(degree[i]==1)   {
                q.push(i);
            }
        }
        
        long long ans=0;
        
        while(!q.empty())
        {
            int l=q.size();
            
            while(l--){
                auto city=q.front();
                q.pop();
                
                if(city==0){
                    break;
                }
                
                ans+=people[city]/seats;

                if(people[city]%seats){
                    ans++;
                }
                
                degree[city]=0;
                
                for(auto x:v[city]){
                    people[x]+=people[city];
                    degree[x]--;
                    
                    if(degree[x]==1)
                    {
                        q.push(x);
                    }
                }
            }
        }
        
        return ans;
    }
};
