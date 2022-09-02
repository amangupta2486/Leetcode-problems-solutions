class NumArray {
public:
    
    vector<int> v;
    
    NumArray(vector<int>& nums) {
        
        int n=nums.size();
        
        //v.resize(n+1);
        
        vector<int> b(n+1,0);
        v=b;
        //memset(v,0,sizeof(v));

        for(int i=1;i<=n;i++)
        {
            v[i]=v[i-1]+nums[i-1];
        }
        
        // for(int i=1;i<=n;i++)
        // {
        //     cout<<v[i]<<" ";
        // }
        
    }
    
    int sumRange(int left, int right) {
        
        return v[right+1]-v[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */