// find duplicate in an array of N+1 Integers
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5]={1,1,2,2,3};
    set<int>s;
    for (int i = 0; i < 5; i++)
    {
        s.insert(arr[i]);
    }
    vector<int>v(s.begin(),s.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}