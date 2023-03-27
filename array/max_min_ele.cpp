// Finding Maximum and minimum element in an Array
#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    int max=INT_MIN,min=INT_MAX;
    for (int i = 0; i < 5; i++)
    {
        if(arr[i]<min)
            min=arr[i];
        if(arr[i]>max)
            max=arr[i];
    }
    cout<<"Max:"<<max<<"\n"<<"Min:"<<min;
    
    return 0;
}