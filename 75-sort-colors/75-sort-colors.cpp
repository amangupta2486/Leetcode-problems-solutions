class Solution {
public:
    void sortColors(vector<int>& a) {
        
        int n=a.size();
        
        int m=0,l=0,h=n-1;
        
        while(m<=h)
        {
            switch(a[m])
            {
                case 0:swap(a[l],a[m]);
                    l++;m++;
                    break;
                    
                case 1:m++;
                    break;
                    
                case 2:swap(a[m],a[h]);
                    h--;
                    break;
            }
        }
    }
};