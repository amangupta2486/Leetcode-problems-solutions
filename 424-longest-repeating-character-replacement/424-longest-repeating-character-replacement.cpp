class Solution {
public:
    
    /*
    The problem says that we can make at most k changes to the string (any character can be replaced with any other character). So, let's say there were no constraints like the k. Given a string convert it to a string with all same characters with minimal changes. The answer to this is

length of the entire string - number of times of the maximum occurring character in the string

Given this, we can apply the at most k changes constraint and maintain a sliding window such that

(length of substring - number of times of the maximum occurring character in the substring) <= k
*/
    int characterReplacement(string a, int k) {
        
        int n=a.size();
        
        vector<int> v(26,0);
        
        int j=0,i=0;
        int mx=0,ans=0;
        
        
        while(i<n)
        {
            v[a[i]-'A']++;
            
            if(mx<v[a[i]-'A'])
            {
                mx=v[a[i]-'A'];
            }
            
            while(j<n && i-j-mx+1>k)
            {
                v[a[j]-'A']--;
                j++;
                for(int h=0;h<26;h++)
                {
                    mx=max(mx,v[h]);
                }
            }
            
            ans=max(ans,i-j+1);
            i++;
        }
        /*
        while(i<n && j<n)
        {
            v[a[i]-'A']++;
            for(int h=0;h<26;h++)
            {
                mx=max(mx,v[h]);
            }
            
            int l=i-j+1;
            
            if(l-mx<=k)
            {
                ans=max(ans,l);
                mx=0;
                i++;
            }
            else 
            {
                v[a[j]-'A']--;
                mx=0;
                j++;
            }
           // v[a[i]-'A']++;
        }
        */
        return ans;
    }
};