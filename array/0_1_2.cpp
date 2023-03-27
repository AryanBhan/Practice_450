// Sort the array of 0 1 2 without any Sorting algorithm

#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 1, 2, 0, 0};
    int low = 0, high = 4, mid = 0;
    for (int i = 0; i < 5; i++)
    {
        switch (arr[mid])
        {
        case 0:

            swap(arr[low++], arr[mid++]);
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(arr[mid], arr[high--]);
            break;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}