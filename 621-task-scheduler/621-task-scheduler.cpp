class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        
        map<char,int> mp;
        
        int mx=0;
        
        int m=tasks.size();
        
        for(auto i:tasks)
        {
            mp[i]++;
            
            mx=max(mx,mp[i]);
        }
        
        int cnt=0;
        
        for(auto i:mp)
        {
            if(i.second==mx)
            {
                cnt++;
            }
        }
        
        int partcount=mx-1;
        int partlength = n-(cnt-1);
        
        int emptyslots= partcount*partlength;
        
        int availabletasks= tasks.size() - (mx*cnt);
        
        int idle=max(0,emptyslots-availabletasks);
        
//         int time=(mx-1)*n + mx;  // (maxfrefreq-1)*idel time + max frequency;
        
//         int ans=time+(cnt-1); // add count of max freuency
        
        return m+idle;
    }
};
/*
 n==1
 5+1=6
 
 5*2=10 + 6 =16
 
*/