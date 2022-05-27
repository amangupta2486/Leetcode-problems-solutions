class Solution {
public:
    void wiggleSort(vector<int>& a) {
        
        int n=a.size();
        vector<int> v;
        sort(a.begin(),a.end());
        int i=(n-1)/2;
        int j=n-1;
        
        //cout<<i<<" "<<j<<endl;
        
        if(n&1)
        {
            while(i>=0 && j>n/2)
            {
                v.push_back(a[i]);
                v.push_back(a[j]);
                i--;
                j--;
            }
            
             if(i==0)
            {
                 v.push_back(a[i]);
            }
        }
        
        else
        {
            while(i>=0 && j>=n/2)
            {
                v.push_back(a[i]);
                v.push_back(a[j]);
                i--;
                j--;
            }
        }
        
        
       
        
        // for(int i=0;i<n-1;i+=2)
        // {
        //    swap(a[i],a[i+1]);
        // }
        for(int i=0;i<n;i++)
        {
            //cout<<v[i]<<" ";
            a[i]=v[i];
        }
        //cout<<endl;
    }
};