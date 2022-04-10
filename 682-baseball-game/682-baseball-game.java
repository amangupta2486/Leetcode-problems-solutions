class Solution {
    public int calPoints(String[] a) {
        
        Stack<Integer> s=new Stack();
        
        for(String x:a)
        {
            if(x.equals("+"))
            {
                int b= s.pop();
                int c= s.peek();
                
                int d=b+c;
                
                s.push(b);
                s.push(d);
            }
            
            else if(x.equals("D"))
            {
                s.push(2*s.peek());
            }
            
            else if(x.equals("C"))
            {
                s.pop();
            }
            else
            {
                s.push(Integer.valueOf(x));
            }
        }
        
        int ans=0;
        
        for(int x:s)
            ans+=x;
        
        return ans;
    }
}