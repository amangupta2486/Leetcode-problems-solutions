/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    
    int solve(MountainArray &a,int t,int i,int j)
    {
        //int l=a.length();
        int ans=-1;
        
//         int i=0,j=l-1;
        
        while(i<=j)
        {
            int m=(i+j)/2;
            
            if(a.get(m)==t)
            {
                return m;
            }
            
            if(a.get(m)<t)
            {
                i=m+1;
            }
            else
            {
                j=m-1;
            }
        }
        
        return ans;
    }
    
    int solve2(MountainArray &a,int t,int i,int j)
    {
        //int l=a.length();
        int ans=-1;
        
//         int i=0,j=l-1;
        
        while(i<=j)
        {
            int m=(i+j)/2;
            
            if(a.get(m)==t)
            {
                return m;
            }
            
            if(a.get(m)>t)
            {
                i=m+1;
            }
            else
            {
                j=m-1;
            }
        }
        
        return ans;
    }
    
    int find(MountainArray &a)
    {
        int l=a.length();
        int ans=-1;
        
        int i=0,j=l-1;
        
        while(i<=j)
        {
            int m=(i+j+1)/2;
            
            if(a.get(m)> a.get((m-1+l)%l) && a.get(m)> a.get((m+1)%l))
            {
                return m;
            }
            
            if(a.get(m)>a.get(0) && a.get(m)<a.get((m+1)%l))
            {
                i=m+1;
            }
            else
            {
                j=m-1;
            }
        }
        
        return ans;
    }
    
    int findInMountainArray(int t, MountainArray &a) {
        
        //cout<<mountainArr.get(t);
        
        int x=find(a);
        
        //cout<<x<<endl;
        
        int l=a.length();
        
        if(a.get(x)==t)
        {
            return x;
        }
        
        int x1=solve(a,t,0,x-1);
        
        if(x1!=-1)
        {
            return x1;
        }
        
        int x2=solve2(a,t,x+1,l-1);
        
        return x2;
        
        //return 0;
    }
};