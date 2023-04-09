#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5]={1,2,3,-2,5};
    int csum=0,msum=0;
    for (int i = 0; i < 5; i++)
    {
        csum+=arr[i];
        if(csum>msum)
            msum=csum;
        if(csum<0)
            csum=0;
    }
    cout<<"Maximum Sum:"<<msum;    
    return 0;
}