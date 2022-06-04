// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


 // } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    static bool cmp(Item &a,Item &b)
    {
        double p=(double)a.value/(double)a.weight;
        double q=(double)b.value/(double)b.weight;
        
        return (p>q);
    }

    double fractionalKnapsack(int w, Item a[], int n)
    {
        sort(a,a+n,cmp);
        
        double ans=0;
        
        for(int i=0;i<n;i++)
        {
            if(a[i].weight<=w)
            {
                ans+=a[i].value;
                w-=a[i].weight;
            }
            
            else if(w>0)
            {
                ans+=(double)(w)*(double)a[i].value/(double)a[i].weight;
                break;
            }
        }
        
        return ans;
    }
};


// { Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}  // } Driver Code Ends