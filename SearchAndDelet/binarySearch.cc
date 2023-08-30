#include <iostream>
using namespace std;
int binarySearch(int *arr, int s, int e, int key)
{ // overflow se jan sutane kaliye.
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        // key mid se jayda hua t right side pe jana hoga.
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        //  mid key se jayda hua t left side pe jana hoga.
        else
        {
            e = mid - 1;
        }
        // mid update
        mid = s + (e - s) / 2;
    }
    // agar element exist nahi hua t -1 return karega.
    return -1;
}
int main()
{
    int n;
    cout << "number of array element " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter array elements ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter searching key ";
    cin >> key;
    int result = binarySearch(arr, 0, n - 1, key);
    cout << key << "th position is " << result;
}
// binary search sref sorted array kaliye applay hoga.