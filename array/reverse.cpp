#include <iostream>
using namespace std;
int main()
{
    int low, high;
    int arr[5] = {1, 2, 3, 4, 5};
    low = 0;
    high = 4;
    while (low < high)
    {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}