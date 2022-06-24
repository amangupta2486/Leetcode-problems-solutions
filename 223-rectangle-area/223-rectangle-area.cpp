class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        
        int l1 =abs(ax1-ax2);
        int b1=abs(ay1-ay2);
        
        int area1 = l1 * b1;
        
        int l2 =abs(bx1-bx2);
        int b2 =abs(by1-by2);
        
        int area2 = l2 * b2;
        
        int total = area1 + area2;
        
        if(bx2<= ax1 || ax2<=bx1 || by1>=ay2 || ay1>=by2)
        {
            return total;
        }
        
        int l=abs(max(ax1,bx1)-min(ax2,bx2));
        int b=abs(max(ay1,by1)-min(ay2,by2));
        
        int common = l*b;
        
        return total-common;
    }
};