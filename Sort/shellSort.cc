#include <iostream>
using namespace std;
void shellSort(int *arr, int n)
{
    int distance = n / 2;
    for (int distance = n / 2; distance >= 1; distance = distance / 2)
    {
        for (int j = distance; j < n; j++)
        {
            for (int i = j - distance; i >= 0; i = i - distance)
            {
                if (arr[i + distance] > arr[i])
                {
                    break;
                }
                else
                {
                    swap(arr[i + distance], arr[i]);
                }
            }
        }
    }
}
int main()
{
    int arr[10] = {1, 9, 2, 4, 3, 5, 76, 8, 9, 4};
    int n = 10;
    shellSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}