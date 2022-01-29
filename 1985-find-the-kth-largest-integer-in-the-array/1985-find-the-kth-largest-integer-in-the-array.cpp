class Solution {
public:
    string kthLargestNumber(vector<string>& a, int k) {
        
        int n=a.size();
        int b=0;
        
        for(int i=0;i<n;i++)
        {
            if(a[i].size()>b)
            {
                b=a[i].size();
            }
        }
        
        for(int i=0;i<n;i++)
        {
            while(a[i].size()<b)
            {
                a[i]="0"+a[i];
            }
        }
        
        sort(a.rbegin(),a.rend());
        
//         for(auto i:a)
//         {
//             cout<<i<<" ";
//         }
        
        cout<<endl;
        
        string s = a[k-1];
        
        int i=0;
        while(s.size()>1 && s[i]=='0')
        {
            s.erase(0,1);
        }
        return s;
    }
};