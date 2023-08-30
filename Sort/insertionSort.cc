#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 7, 5, 3, 2, 5};
    int n = 6;

    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j;
        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
// time complexity O(n) for already sorted array ke liye.oarna O(n2) hoga.Space complexity O(1) .keu ki yeha pe constant variable leya geya he.