/**
 * @param {number[]} nums
 * @return {number}
 */
var lengthOfLIS = function(a) {
    
    let n=a.length;
    
    let dp=new Array();
    
    
    for(let i=0;i<n;i++)
    {
        dp[i]=1;
        
        for(let j=0;j<i;j++)
        {
            if(a[i]>a[j] && dp[i]<dp[j]+1)
            {
                dp[i]=dp[j]+1;
            }
        }
    }
    
    let mx=0;
    
    for(let i=0;i<n;i++)
    {
        mx=Math.max(mx,dp[i]);
    }
    
    return mx;
};