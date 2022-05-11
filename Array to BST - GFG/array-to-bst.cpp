// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    
    vector<int> ans;
    
    struct Node{
        public:
        
        int data;
        Node* left=NULL;
        Node* right=NULL;
        
        Node(int a)
        {
            data=a;
            left=NULL;
            right=NULL;
        }
    };
    
    Node* solve(vector<int> &a,int i,int j)
    {
        if(i>j)
        {
            return NULL;
        }
        
        int m=(i+j)/2;
        
        Node* root=new Node(a[m]);
        root->left=solve(a,i,m-1);
        root->right=solve(a,m+1,j);
        
        return root;
    }
    
    void preorder(Node* root)
    {
        if(root==NULL)
        {
            return;
        }
        
        ans.push_back(root->data);
        preorder(root->left);
        preorder(root->right);
    }
    vector<int> sortedArrayToBST(vector<int>& a) {
        
        int n=a.size();
        Node* root=solve(a,0,n-1);
        
        preorder(root);
        
        return ans;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution obj;
		vector<int>ans = obj.sortedArrayToBST(nums);
		for(auto i: ans)
			cout << i <<" ";
		cout << "\n";
	}
	return 0;
}  // } Driver Code Ends