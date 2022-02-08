class Solution {
public:
    int addDigits(int a) {
        
        int s=a;
        int n=0;
        
        while(true)
        {
         
            
            while(s>0)
            {
                int r=s%10;
                
                n+=r;
                
                s=s/10;
            }
            
            //cout<<n<<endl;
            
            if(n<10)
            {
                break;
            }
            
            s=n;
            n=0;
        }
        
        return n;
    }
};