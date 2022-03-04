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
        sort(a,a+n,[](auto &a,auto &b){
            return a.profit > b.profit;
        });
        
        int maxd=0;

        for(int i=0;i<n;i++)
        {
            maxd=max(maxd,a[i].dead);
        }
        
        vector<int> v(maxd+1,-1);
        
        int p=0,c=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=a[i].dead;j>=1;j--)
            {
                if(v[j]==-1)
                {
                    //cout<<a[i].dead<<" ";
                    v[j]=1;
                    p+=a[i].profit;
                    c++;
                    break;
                }
            }
        }
        
        return {c,p};
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