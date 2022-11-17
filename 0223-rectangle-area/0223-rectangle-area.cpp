class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        
        int x1=abs(ax1-ax2);
        int x2=abs(bx1-bx2);
        
        int y1=abs(ay1-ay2);
        int y2=abs(by1-by2);
        
        int total=(x1*y1)+(x2*y2);
        
        if(ay2<by1 || ax2<bx1 || by2<ay1 ||bx2<ax1)
        {
            //cout<<2<<endl;
            return total;
        }
        
        int cx1=max(ax1,bx1);
        int cy1=max(ay1,by1);
        int cx2=min(ax2,bx2);
        int cy2=min(ay2,by2);
        
        int x3=abs(cx1-cx2);
        int y3=abs(cy1-cy2);
        
        //cout<<1<<endl;
        
        //cout<<cx1<<" "<<cx2<<" "<<cy1<<" "<<cy2<<endl;
        
        return total-(x3*y3);
    }
};