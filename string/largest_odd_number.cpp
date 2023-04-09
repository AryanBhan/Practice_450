#include<iostream>
using namespace std;
int main()
{
    string number;
    cin>>number;
    int last=0;
    for (int i = number.length()-1; i >=0; i--)
    {
        if((number[i]-'0')%2!=0)
            break;
        else
            last++;
    }
    for (int i = 0; i <number.length()-last; i++)
    {
        cout<<number[i];
    }
    
    return 0;
}