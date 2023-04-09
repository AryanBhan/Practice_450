#include<iostream>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    string temp="";
    string res="";
    int left=0,right=s.length();
    while (left<right)
    {
        /* code */
        if(s[left]!=' ')
        {
            temp+=s[left];
        }
        else if(s[left]==' ')
        {
            if(res!="")res=temp+" "+res;
            else res=temp;
            temp="";
        }
        left++;
    }
    if(temp!="")
    {
        if(res!="")
        res=temp+" "+res;
        else
            res=temp;
    }

    cout<<res;
    
    
    return 0;
}