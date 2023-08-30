#include <iostream>
using namespace std;
void selectionSort(int *arr, int n)
{
    // yeha pe i ko n-1 tak isliye liya , keuki n-1 tak sort hogeya matlab last wala apneapsei sort ho jay ga
    for (int i = 1; i < n - 1; i++)
    {
        int mini = i;
        // yeha pe first element ko iska next element se compare karne kaliye i+1 lena pora
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        swap(arr[mini], arr[i]);
    }
}
int main()
{
    int arr[5] = {1, 5, 4, 2, 3};
    int n = 5;
    // yeha pe selection sort function ko kal karliya mene
    selectionSort(arr, n);
    // print karne kaliye
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
// time complexity O(n2) both worst case ,best case ke liye. space complexity O(1) keuki yeha pe constant variable leya.