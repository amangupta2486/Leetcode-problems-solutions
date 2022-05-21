class Solution {
public:
    string intToRoman(int a) {
        
        string ans="";
        while(a>=1000)
        {
            ans+='M';
            a-=1000;
        }
        while(a>=900)
        {
            ans+="CM";
            a-=900;
        }
        while(a>=500)
        {
            ans+='D';
            a-=500;
        }
         while(a>=400)
        {
            ans+="CD";
            a-=400;
        }
        while(a>=100)
        {
            ans+='C';
            a-=100;
        }
         while(a>=90)
        {
            ans+="XC";
            a-=90;
            cout<<a<<endl;
        }
         while(a>=50)
        {
            ans+="L";
            a-=50;
        }
        while(a>=40)
        {
            ans+="XL";
            a-=40;
        }
        while(a>=10)
        {
            ans+='X';
            a-=10;
        }
        
        while(a==9)
        {
            ans+="IX";
            a-=9;
        }
  
        while(a>=5)
        {
            cout<<a<<endl;
            ans+='V';
            a-=5;
        }
        
        while(a>=4)
        {
            
            ans+="IV";
            a-=4;
        }
        
        while(a>=1)
        {
            ans+='I';
            a-=1;    
        }
        
        return ans;
    }
};