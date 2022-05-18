// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution 
{
    public:
    //Function to find out minimum steps Knight needs to reach target position.
	int minStepToReachTarget(vector<int>&a,vector<int>&b,int n)
	{
	    int vis[n+1][n+1];
	    memset(vis,0,sizeof(vis));
	    
	    if(a==b)
	    {
	        return 0;
	    }
	    
	    queue<vector<int>> q;
	    q.push({a[0],a[1],0});
	    
	    vis[a[0]][a[1]]=1;
	    
	    int ans=0;
	    
	    int dx[8]={2,2,-2,-2,1,-1,1,-1};
	    int dy[8]={-1,1,-1,1,2,2,-2,-2};
	    while(!q.empty())
	    {
	        int k=q.size();
	        while(k--)
	        {
	            auto p=q.front();
	            q.pop();
	            
	            int i=p[0];
	            int j=p[1];
	            int c=p[2];
	            
	            if(i==b[0] && j==b[1])
	            {
	                return c;
	            }
	            for(int k=0;k<8;k++)
	            {
	                int x=i+dx[k];
	                int y=j+dy[k];
	                
	                if(x>=1 && x<=n && y>=1 && y<=n && !vis[x][y])
	                {
	                    vis[x][y]=1;
	                    q.push({x,y,c+1});
	                }
	            }
	        }
	    }
	    
	    return -1;
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