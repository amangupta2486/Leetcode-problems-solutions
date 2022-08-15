class Solution {
public:
    int romanToInt(string s) {
        
        int n=s.size();
        
        int a=0;
        
        map<char,int> mp;
        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;
        
        for(int i=0;i<n;i++)
        {
            if(i+1<n && s[i]=='I' && s[i+1]=='V')
            {
                a+=4;
                i++;    
            }
            else if(i+1<n && s[i]=='I' && s[i+1]=='X')
            {
                a+=9;
                i++;    
            }
            else if(i+1<n && s[i]=='X' && s[i+1]=='L')
            {
                a+=40;
                i++;    
            }
            else if(i+1<n && s[i]=='X' && s[i+1]=='C')
            {
                a+=90;
                i++;    
            }
            else if(i+1<n && s[i]=='C' && s[i+1]=='D')
            {
                a+=400;
                i++;    
            }
            else if(i+1<n && s[i]=='C' && s[i+1]=='M')
            {
                a+=900;
                i++;    
            }
            else
            {
                a+=mp[s[i]];
                
                //cout<<mp[s[i]]<<" ";
            }
        }
        
        //cout<<endl;
        
        return a;
    }
};