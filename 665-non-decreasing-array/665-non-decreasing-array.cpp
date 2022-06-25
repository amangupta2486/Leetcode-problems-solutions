class Solution {
public:
    bool checkPossibility(vector<int>& a) {
        
        int n=a.size();
        
        int cnt=0;
        
        for(int i=1;i<n;i++)
        {
            if(a[i-1]>a[i])
            {
                cnt++;
                
                if(i>1 && i<n-1 && a[i-2]>a[i] && a[i-1]>a[i+1])
                {
                    return false;
                }
                if(cnt>1)
                {
                    return 0;
                }
            }
        }
        
        return true;
    }
};
/*
[4,2,3]
[4,2,1]
[5,7,1,8]
[3,4,2,3]
[1,1,1]
*/