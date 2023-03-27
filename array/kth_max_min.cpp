#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    int k;
    cin>>k;
    sort(arr,arr+5);
    cout<<"Kth Min:"<<arr[k-1]<<"\n"<<"Kth Max:"<<arr[5-k];
    return 0;
}