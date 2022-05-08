/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * class NestedInteger {
 *   public:
 *     // Return true if this NestedInteger holds a single integer, rather than a nested list.
 *     bool isInteger() const;
 *
 *     // Return the single integer that this NestedInteger holds, if it holds a single integer
 *     // The result is undefined if this NestedInteger holds a nested list
 *     int getInteger() const;
 *
 *     // Return the nested list that this NestedInteger holds, if it holds a nested list
 *     // The result is undefined if this NestedInteger holds a single integer
 *     const vector<NestedInteger> &getList() const;
 * };
 */

class NestedIterator {
public:
    
    stack<NestedInteger> s;
    
    NestedIterator(vector<NestedInteger> &nestedList) {
        
        int n=nestedList.size();
        
        for(int i=n-1;i>=0;i--)
        {
            s.push(nestedList[i]);
        }
    }
    
    int next() {
        int p=s.top().getInteger();
        s.pop();
        
        return p;
    }
    
    bool hasNext() {
        
        while(!s.empty())
        {    
            auto p=s.top();

            if(p.isInteger())
            {
                return true;
            }
            s.pop();

            vector<NestedInteger> &v=p.getList();

            int n=v.size();

            for(int i=n-1;i>=0;i--)
            {
                s.push(v[i]);
            }

        }
        return 0;
    }
};

/*

Input
[[],[3]]
Output
[4095]
Expected
[3]

*/

/**
 * Your NestedIterator object will be instantiated and called as such:
 * NestedIterator i(nestedList);
 * while (i.hasNext()) cout << i.next();
 */