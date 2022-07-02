class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        
        int n=a.size();
        
        vector<int> s;
        
        for(int i=0;i<n;i++)
        {
            int f=1;
            
            while(!s.empty() && a[i]<0 && s.back()>0 && s.back()<=abs(a[i]))
            {

               if(s.back()==abs(a[i]))
               {
                   f=0;
                   s.pop_back();
                   break;
               }
                
               s.pop_back();
                
            }
            
            if(a[i]<0 && f)
            {
                if(s.empty() || s.back()<0)
                {
                    s.push_back(a[i]);
                }
            }
            
            else if(a[i]>0)
            {
                s.push_back(a[i]);
            }
            
        }
        
        return s;
    }
};