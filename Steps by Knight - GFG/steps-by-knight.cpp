// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution 
{
    public:
    //Function to find out minimum steps Knight needs to reach target position.
    
    int dx[8] = { -2, -1, 1, 2, -2, -1, 1, 2 };
    int dy[8] = { -1, -2, -2, -1, 1, 2, 2, 1 };
    
	int minStepToReachTarget(vector<int>& s,vector<int>& e,int n)
	{
	   // if(s==e)
	   // {
	   //     return 0;
	   // }
	    
	    int vis[n+1][n+1];
	    
	    memset(vis,0,sizeof(vis));
	    
	    int x=s[0];
	    int y=s[1];
	    
	    queue<vector<int>> q;
	    
	    q.push({x,y,0});
	    
	    int f=1;
	    int ans=0;
	    
	    while(!q.empty())
	    {
	        int k=q.size();
	        
	        while(k--)
	        {
	             auto p=q.front();
	             q.pop();
	             
	             int a=p[0];
	             int b=p[1];
	             int c=p[2];
	             
	             if(a==e[0] && b==e[1])
	             {
	                 return c;
	               //  ans=c;
	               //  f=0;
	               //  break;
	             }
	             for(int k=0;k<8;k++)
        	    {
        	        int i=a+dx[k];
        	        int j=b+dy[k];
        	        
        	        if(i>=1 && j>=1 && i<=n && j<=n && !vis[i][j])
        	        {
        	            vis[i][j]=1;
        	            q.push({i,j,c+1});
        	        }
        	    }
	        }
	        
	        if(f==0)
	        {
	            break;
	        }
	    }
	    
	    return ans;
	   
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		vector<int>KnightPos(2);
		vector<int>TargetPos(2);
		int N;
		cin >> N;
		cin >> KnightPos[0] >> KnightPos[1];
		cin >> TargetPos[0] >> TargetPos[1];
		Solution obj;
		int ans = obj.minStepToReachTarget(KnightPos, TargetPos, N);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends