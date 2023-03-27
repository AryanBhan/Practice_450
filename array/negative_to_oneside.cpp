// Move all the negative element to one side

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[9]={-12,11,-13,-5,6,-7,5,-3,-6};
    int mid=0,low=0;
    while (mid<9)
    {
        if(arr[mid]>0)
            mid++;
        else if (arr[mid]<0)
        {
             swap(arr[mid++],arr[low++]);
        }

    }
    for (int i = 0; i < 9; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}