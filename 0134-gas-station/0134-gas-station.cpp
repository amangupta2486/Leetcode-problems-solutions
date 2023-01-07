class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        int n=gas.size();
        
        int s=0,p=0;
        
        for(int i=0;i<n;i++)
        {
            int j=i,k=i;
            int c=0,fuel=gas[i];
             
            while(fuel>=cost[j] && c<n)
            {
                fuel=fuel-cost[j];
                j=(j+1)%n;
                fuel+=gas[j];
                c++;
            }
            
            if(c==n)
            {
                return k;
            }
            else
            {
                i=i+c;
            }
        }
        
        return -1;
    }
};