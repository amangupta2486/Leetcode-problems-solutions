class Solution {
public:
    string removeDuplicates(string s) {
      
        int n=s.size();
        
        string b="";
        
        for(int i=0;i<n;i++)
        {
              if(b=="")
              {
                  b+=s[i];
              }
              else
              {
                  if(b.back()==s[i])
                  {
                      b.pop_back();
                  }
                  else
                  {
                      b+=s[i];
                  }
              }
        }
        
        return b;
    }
};