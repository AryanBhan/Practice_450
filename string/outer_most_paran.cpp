#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int open=0;
    int close=0;
    int start=0;
    string res="";
    for (int i = 0; i <s.length(); i++)
    {
        if(s[i]=='(')
            open++;
        else if(s[i]==')')
            close++;
        if(open==close)
        {
            res+=s.substr(start+1,i-start-1);
            start=i+1;
        }
    }
    cout<<res;
    return 0;
}