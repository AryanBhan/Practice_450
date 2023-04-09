// Find the Union and Intersection of the two sorted arrays.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={1,2,3,6,7};
    int arr3[5];
    int i=0,j=0,n=5,k=0;
    cout<<"UNION :\n";
    while (i<n && j<n)
    {
        if(arr1[i]<arr2[j])
        {
            cout<<arr1[i]<<" ";
            i++;
        }
        else if(arr1[i]>arr2[j])
        {
            cout<<arr2[j]<<" ";
            j++;
        }
        else
        {
            cout<<arr2[j]<<" ";
            arr3[k]=arr2[j];
            i++;
            j++;
            k++;
        }

    }
    while (i<n)
    {
        cout<<arr1[i++]<<" ";
    }
    while (j<n)
    {
        cout<<arr2[j++]<<" ";
    }
    cout<<"\nINTERSECTION:\n";
    for (int i = 0; i < k; i++)
    {
        cout<<arr3[i]<<" ";
    } 
    return 0;
}