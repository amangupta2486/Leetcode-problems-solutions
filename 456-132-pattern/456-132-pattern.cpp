class Solution {
public:
    bool find132pattern(vector<int>& a) {
        
        int n=a.size();
        
        stack<int> s;

        int s3=INT_MIN;
        
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]<s3)
            {
              return true;    
            }
            
            while(!s.empty() && s.top()<a[i])
            {
                s3=s.top();
                s.pop();
                
            }
            
            s.push(a[i]);

        }
        
       return false;
    }
};

//[3,5,0,3,4]
// Input
// [-2,1,2,-2,1,2]
// Output
// false
// Expected
// true

/*

[1,2,3,4]
[3,1,4,2]
[-1,3,2,0]
[3,5,0,3,4]
[-2,1,2,-2,1,2]

*/