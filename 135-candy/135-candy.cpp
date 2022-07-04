class Solution {
public:
    int candy(vector<int>& r) {
        
        int n=r.size();
        
        if(n==1)
        {
            return 1;
        }
        
        int c=0;
        vector<int> a(n,0);
        
        if(r[0]>r[1])
        {
            a[0]=2;
        }
        else
        {
            a[0]=1;
        }
        
        //c+=a[0];
        
        for(int i=1;i<n;i++)
        {
            if(r[i]>r[i-1])
            {
                a[i]=a[i-1]+1;
            }
            else
            {
                a[i]=1;
            }
            
//             if(i<n-1 && a[i]==a[i-1] && r[i]>r[i+1])
//             {
//                 a[i]+=1;
//             }
            //c+=a[i];
        }
        
        for(int i=n-2;i>=1;i--)
        {
            if(r[i-1]>=r[i] && r[i]>r[i+1])
            {
                a[i]=a[i+1]+1;
            }
            else if(r[i-1]<r[i] && r[i]>r[i+1])
            {
                if(a[i]<=a[i+1])
                a[i]=a[i+1]+1;
            }
        }
        
        if(r[0]>r[1])
        {
            a[0]=a[1]+1;
        }
        for(int i=0;i<n;i++)
        {
            //cout<<a[i]<<" ";
            c+=a[i];
        }
        
        //cout<<endl;
        
        return c;
    }
};
/*
[1,0,2]
[1,2,2]
[1,2,3,4,5]
[1,1,1]
[1,2,3,45,2,3,43,434,3]
[1,3,2,2,1]
[1,2,87,87,87,2,1]
*/