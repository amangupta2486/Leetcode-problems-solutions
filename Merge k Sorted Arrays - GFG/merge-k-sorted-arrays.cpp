// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
#define N 105
using namespace std;
void printArray(vector<int> arr, int size)
{
for (int i=0; i < size; i++)
	cout << arr[i] << " ";
}


 // } Driver Code Ends
//User function Template for C++


class Solution
{
    public:
    //Function to merge k sorted arrays.
    
    vector<int> merge(vector<int> a,vector<int> b)
    {
        int n=a.size();
        int m=b.size();
        
        a.resize(n+m);
        int i=n-1,j=m-1;
        
        while(i>=0 && j>=0)
        {
            if(a[i]>=b[j])
            {
                a[i+j+1]=a[i];
                i--;
            }
            else
            {
                a[i+j+1]=b[j];
                j--;
            }
        }
        
        while(j>=0)
        {
            a[i+j+1]=b[j];
            j--;
        }
        
        return a;
    }
    vector<int> mergeKArrays(vector<vector<int>> a, int K)
    {
        int n=a.size();
        
        vector<int> v=a[0];
        
        for(int i=1;i<n;i++)
        {
            v=merge(v,a[i]);
        }
        
        return v;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--){
	    int k;
	    cin>>k;
	    vector<vector<int>> arr(k, vector<int> (k, 0));
	    for(int i=0; i<k; i++){
	        for(int j=0; j<k; j++)
	        {
	            cin>>arr[i][j];
	        }
	    }
	    Solution obj;
    	vector<int> output = obj.mergeKArrays(arr, k);
    	printArray(output, k*k);
    	cout<<endl;
    }
	return 0;
}





  // } Driver Code Ends