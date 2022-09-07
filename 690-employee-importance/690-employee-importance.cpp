/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        
        int n=employees.size();
        
        int ans=0;
        
        queue<Employee*> q;
        
        vector<int> vis(2005,0);
        
        vis[id]=1;
        
        vector<int> v(2005,0);
        
        for(int i=0;i<n;i++)
        {
            int x=employees[i]->id;
            
            v[x]=i;
        }
        
        q.push(employees[v[id]]);
        
        while(!q.empty())
        {
            int k=q.size();
            
            while(k--)
            {
                auto p=q.front();
                q.pop();
                
                int newId=p->id;
                
                ans+=employees[v[newId]]->importance;
                
                for(auto x:employees[v[newId]]->subordinates)
                {
                    //if(!vis[v[x]])
                    {
                      q.push(employees[v[x]]);
                      vis[v[x]]=1;
                    }
                }
                    
            }
        }
        
        return ans;
    }
};