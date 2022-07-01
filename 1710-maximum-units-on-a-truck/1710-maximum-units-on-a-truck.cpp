class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
             
        sort(boxTypes.begin(),boxTypes.end(),[&](auto &a,auto &b){
            return a[1]>b[1];
        });
        
        int ans=0;
        
        for(auto box:boxTypes)
        {
            if(box[0]<=truckSize)
            {
                ans+=box[0]*box[1];
                truckSize-=box[0];
            }
            else if(truckSize>0)
            {
                ans+=box[1]*truckSize;
                truckSize=0;
                break;
            }
        }
        
        return ans;
    }
};