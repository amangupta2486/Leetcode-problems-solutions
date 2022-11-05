class Solution {
public:
    int minMutation(string start, string end, vector<string>& b) {
        
        queue<pair<string,int>> q;
        
        set<string> bank;
        
        for(auto x:b)
        {
            bank.insert(x);
        }
        
        q.push({start,0});
        
        //int c=0;
        
        cout<<endl;
        
        unordered_set<string> st;
        
        while(!q.empty())
        {
            int l=q.size();
            
            while(l--)
            {
                auto p=q.front();
                q.pop();
                
                auto x=p.first;
                int c=p.second;
                
                if(x==end)
                {
                    return c;
                }
                
                for(int i=0;i<8;i++)
                {
                        string d=x;
                        
                        char v[4]={'A','G','T','C'};
                            
                        for(auto ch:v)
                        {
                            d[i]=ch;
                        
                            //auto it=find(bank.begin(),bank.end(),d);

                            //cout<<d<<" ";

                            if(bank.find(d)!=bank.end() && st.find(d)==st.end())
                            {
                                q.push({d,c+1});
                                st.insert(d);
                                //bank.erase(d);
                            }
                        }
                }
            }
            
//             cnt++;
            
//             if(cnt==10000)
//             {
//                 return -1;
//             }
        }
        
        
        
        return -1;
    }
};