class Solution {
public:
    
    string getSmallestString(int n, int p) {
    string str="";
    int k=p;
    for(int i=0;i<n;i++)
    {
        str+='a';
        
    }
    k=k-n;
    for(int i=n-1;i>=0;i--)
    {  
        if(k/26>=1)
        {
           str[i]=122;k=k-25;
         }
        else if(k%26!=0)
        {
            str[i]=(k+97);k=-1;
        }
        if(k==-1)return str;
    }
    return str;
};
};