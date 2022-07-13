class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        
        int x1=abs(ax1-ax2);
        int y1=abs(ay1-ay2);
        
        int x2=abs(bx1-bx2);
        int y2=abs(by1-by2);
        
        int x3=max(ax1,bx1);
        int x4=min(ax2,bx2);
        
        int y3=max(ay1,by1);
        int y4=min(ay2,by2);
        
        int comm = (x3-x4) * (y3-y4);
        
        int area1=x1*y1;
        int area2=x2*y2;
        
        int total=area1 + area2;
        
        if((ay2<=by1) || (ay1>=by2) || (ax1>=bx2) || (ax2<=bx1))
        {
            return total;
        }

        return total-comm;
    }
};