class Solution {
public:
    int canCompleteCircuit(vector<int>& a, vector<int>& c) {
        
        int n=a.size();
        

        int s=0,p=0,start=0;
        
        for(int i=0;i<n;i++)
        {
            s+=a[i]-c[i];
            p+=a[i]-c[i];
            
            if(p<0)
            {
                p=0;
                start=i+1;
            }
        }
        
       
      return s<0 ? -1 :start ; 
    }
};