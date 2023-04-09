// Merge 2 sorted arrays without using Extra space.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr1[5]={1,2,4,8,10}; //1 2 3 
    int arr2[5]={3,5,6,7,9};//4
    int l=0,r=0,n=5;
    while (l<n && r<n)
    {
        /* code */
        if(arr1[l]<arr2[r])
        {
            l++;
        }
        else
        {
            swap(arr1[l],arr2[r]);
            sort(arr2, arr2 + n);
        }
    }
    // Sort first array
   
  
    // Sort second array
    
    for (int i = 0; i < 5; i++)
    {
        cout<<arr1[i]<<" ";
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<arr2[i]<<" ";
    }
    
    return 0;
}