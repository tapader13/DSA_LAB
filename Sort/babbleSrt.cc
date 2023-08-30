#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 4, 2, 3, 6, 5};
    int n = 6;

    for (int i = 0; i < n - 1; i++)
    {
        bool swaped = false;
        for (int j = 0; j < n - 1; j++)
        {
            // yeha pe n-1-i be lika ja sakta ha.Agar yeha pe i is equal to 1 se suru hota t,j is equal to n-i jorur hota.
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swaped = true;
            }
        }
        if (swaped == false)
        {
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
// time complexity O(n) for already sorted array ke liye.oarna O(n2) hoga.Space complexity O(1) .keu ki yeha pe constant variable leya geya he.