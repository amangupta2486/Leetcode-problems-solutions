class Solution {
public:
    bool isPossible(vector<int>& a) {
        
        int n=a.size();
        
        priority_queue<int> q;
        
        long long sum=0;
        
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
            q.push(a[i]);
        }
        
        while(q.top()!=1)
        {
            long long val=q.top();
            q.pop();
            
            long long diff=sum-val;
            
            if(diff==1)
            {
                return true;
            }
            
            if(diff>val || diff==0 || val%diff==0)
            {
                return false;
            }
            
            val%=diff;
            sum=diff+val;
            q.push(val);
        }
        
        return true;
    }
};