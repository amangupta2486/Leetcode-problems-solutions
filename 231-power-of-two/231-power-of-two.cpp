class Solution {
public:
    bool isPowerOfTwo(int n) {
      
      if(n<=0)
      {
          return 0;
      }
    
      int x=log2(n);
      //cout<<x<<endl;
      return pow(2,x)==n ? 1 :0;
    }
};