class Solution {
public:
    int rob(vector<int>& a) {
        
        int n=a.size();
	
        if(n<4)
        {
            return *max_element(a.begin(),a.end());
        }

        vector<long long int> b(n,0);
        vector<long long int> d(n,0);

        b[0]=a[0];
        b[1]=max(a[0],a[1]);

        for(int i=2;i<n-1;i++)
        {
            b[i]=max(a[i]+b[i-2],b[i-1]);
        }

        d[1]=a[1];
        d[2]=max(a[1],a[2]);

        for(int i=3;i<n;i++)
        {
            d[i]=max(a[i]+d[i-2],d[i-1]);
        }

        return max(b[n-2],d[n-1]);
    }
};