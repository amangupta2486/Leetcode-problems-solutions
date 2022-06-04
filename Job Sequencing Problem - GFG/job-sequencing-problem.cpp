// { Driver Code Starts
// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits 
#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 


 // } Driver Code Ends
/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/

class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job a[], int n) 
    { 
        // your code here
        int mx=0;
        for(int i=0;i<n;i++)
        {
            mx=max(mx,a[i].dead);
        }
        
        vector<int> d(mx+1,1);
        
        int cnt=0,p=0;
        
        sort(a,a+n,[&](auto &a,auto &b){
            return a.profit>b.profit;
        });
        
        for(int i=0;i<n;i++)
        {
            for(int j=a[i].dead;j>=1;j--)
            {
                if(d[j]==1)
                {
                   // cout<<d[j]<<" ";
                    d[j]=-1;
                    //cout<<d[j]<<" ";
                    p+=a[i].profit;
                    cnt++;
                    break;
                }
            }
        }
        
        return {cnt,p};
    } 
};

// { Driver Code Starts.
// Driver program to test methods 
int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}


  // } Driver Code Ends