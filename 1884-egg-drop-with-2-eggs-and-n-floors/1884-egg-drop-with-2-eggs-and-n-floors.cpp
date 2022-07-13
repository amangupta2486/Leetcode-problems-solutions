class Solution {
public:
    int twoEggDrop(int n) {
        
        int x=0;
        int i=0;
        
        while(x<n)
        {
            x=(i*(i+1))/2;
            i++;
        }
        
        return i-1;
    }
};