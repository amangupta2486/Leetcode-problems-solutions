// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int minSteps(int d){
        
         int ans=0;
        int i=1,c=0;
        
        while(true)
        {
            ans+=c;
            c++;
            if(ans==d)
            {
                return c-1;
                break;
            }
            
            if(ans>d && (ans-d)%2==0)
            {
                return c-1;
                break;
            }
            
        }

        return 0;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int D;
        cin>>D;
        
        Solution ob;
        cout<<ob.minSteps(D)<<"\n";
    }
    return 0;
}  // } Driver Code Ends