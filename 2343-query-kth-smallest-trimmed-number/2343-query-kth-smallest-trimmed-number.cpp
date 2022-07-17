class Solution {
public:
    vector<int> smallestTrimmedNumbers(vector<string>& a, vector<vector<int>>& q) {
        
        int n=a.size();
        int p=a[0].size();
        int m=q.size();
        
        vector<int> ans;
        /*
        vector<string> adj[p+1];
        
        for(int i=1;i<=p;i++)
        {
            int z=p-i;
           // cout<<i<<" ";
            for(int j=0;j<n;j++)
            {
                string s=a[j].substr(z,i);
                cout<<s<<" ";
                adj[z].push_back(s);
            }
            cout<<endl;
        }
        */
        
        for(auto x:q)
        {
            int idx=x[0]-1;
            int l=x[1];
            int z=p-l;
            //cout<<z<< " ";
            
            //auto v=a;
            
            //reverse(v.begin(),v.end());
            
            //vector<pair<string,int>> b;
            
            priority_queue<pair<string,int>,vector<pair<string,int>>,greater<pair<string,int>>> b;  //minheap
            
            for(int i=0;i<n;i++)
            {
               //reverse(v[i].begin(),v[i].end());
               // string s=a[i].substr(z,l);
                //string s=adj[z][i];
                // s+=a[i][z];
                //int y=stoi(s);
                //cout<<y<<" ";
                b.push({a[i].substr(z,l),i});
                
                if(b.size()>n-idx)
                {
                    b.pop();
                }
            }
            
            //sort(b.begin(),b.end());
            //cout<<endl;
            // while(idx--)
            // {
            //     b.pop();
            // }
            
            ans.push_back(b.top().second);
            
        }
         //cout<<endl;
        return ans;
    }
};