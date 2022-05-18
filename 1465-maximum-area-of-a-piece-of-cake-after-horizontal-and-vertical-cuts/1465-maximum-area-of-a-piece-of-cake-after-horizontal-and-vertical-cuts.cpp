class Solution {
public:
    int maxArea(int h, int w, vector<int>& a, vector<int>& b) {
        
        a.push_back(h);
        b.push_back(w);
        
        a.insert(a.begin(),0);
        b.insert(b.begin(),0);
        
        int n=a.size();
        int m=b.size();
        
        int l=0,br=0;
        
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        
        int mod=1000000007;
        
        for(int i=0;i<n-1;i++)
        {
            l=max(l,abs(a[i+1]-a[i]));
            l=l%mod;
        }
        
        for(int i=0;i<m-1;i++)
        {
            br=max(br,abs(b[i+1]-b[i]));
            br=br%mod;
        }
        
        //cout<<l<<" "<<br<<endl;
        
        
       //int mod=1000000007;
        long long int x=(1ll*l*br)%mod;
        int y=x;
        
        return (y)%mod;
    }
};