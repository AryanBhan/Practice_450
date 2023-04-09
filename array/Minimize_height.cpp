// Minimise the maximum difference between heights [V.IMP]
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5]={3,6,8,9,16};
    sort(arr,arr+5);
    int k;
    cin>>k;
    int temp_min=arr[0];
    int temp_max=arr[4];
    int ans=temp_max-temp_min;
    for (int i = 1; i < 5; i++)
    {
        if(arr[i]-k<0)continue;
        temp_min=min(arr[0]+k,arr[i]-k);
        temp_max=max(arr[4]-k,arr[i-1]+k);
        ans=min(ans,temp_max-temp_min);
    }
    cout<<ans;
    return 0;
}