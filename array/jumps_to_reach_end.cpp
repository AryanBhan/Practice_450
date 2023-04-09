// Minimum no. of Jumps to reach end of an array
// {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9} 
#include<iostream>
using namespace std;
int main()
{
    int arr[11]={1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    //1 1 1 1 1 1
    int n=10;
    int jumps=0;
    int i=0;
    while (n>0)
    {
        /* code */
        if(arr[i]==0)
        {
            jumps=-1;
            break;
        }
        n-=arr[i];
        i+=arr[i];
        jumps++;

    }
    cout<<jumps;
    
    return 0;
}