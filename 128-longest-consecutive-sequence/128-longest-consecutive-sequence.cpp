class Solution {
public:
    int longestConsecutive(vector<int>& a) {
        
        int n=a.size();
        
        if(n==0)
        {
            return 0;
        }
        unordered_set<int> s;
        //unordered_map<int,int> s;
        
        for(int i=0;i<n;i++)
        {
            s.insert(a[i]);
            //s[a[i]]=1;
        }
        int ans=1;
        //sort(a.begin(),a.end());
        
        for(int i=0;i<n;i++)
        {
            if(s.count(a[i]-1)==0)
            {
                int j=a[i];
                int l=1;
                
                while(s.count(j+1)!=0)
                {
                    l++;
                    j++;
                }
                ans=max(ans,l);
            }
        }
        
        return ans;
    }
};