class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        int f=0,c=0;

        if(n<0)
        {
            return 0;
        }
        for(int i=0;i<32;i++)
        {
            int x=1<<i;
            //cout<<x<<" ";
            if((x&n))
            {
                c++;
            }
            
        }
        
       // cout<<c<<endl;
        
        return c==1 ? 1 : 0;
    }
};