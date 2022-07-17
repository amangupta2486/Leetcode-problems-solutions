class Solution {
public:
    void sortColors(vector<int>& a) {
        
        int n=a.size();
        
        int l=0,m=0,h=n-1;
        
        while(m<=h)
        {
            switch(a[m])
            {
                case 0:swap(a[l++],a[m++]);
                       break;
                case 1:m++;
                       break;
                case 2:swap(a[m],a[h--]);
                       break;
            }
        }
    }
};