class Solution {
public:
    vector<long long> maximumEvenSplit(long long a) {
        
        long long c=0;
        long long i=2;
        
        vector<long long> v;
        
        if(a%2==1)
        {
            return v;
        }
        
        
        while(c+i<=a)
        {
            c+=i;
            v.push_back(i);
            i+=2;
        }
        
        if(c<a)
        {
            int n=v.size();
            
            v[n-1]+= a -c;
        }
        
        return v;
    }
};