#include <iostream>
using namespace std;
int varior(int arr[], int s, int e)
{
    // suru ka value ko me pivit dorliya
    int pivit = arr[s];
    int count = 0;
    // pura array me pivit ce suta element kitna ha ta janne ka liye
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivit)
        {
            count++;
        }
    }
    int pivitIndex = count + s;
    // pivit index ko sahi jayga pouca diya
    pivit = arr[pivitIndex];
    // pivit ko sahi jayga pouca diya
    swap(arr[pivitIndex], arr[s]);
    // two pointer approach laga diya
    int i = s, j = e;
    while (i < pivitIndex && pivitIndex < j)
    {
        if (arr[i] < pivit)
        {
            i++;
        }
        if (arr[j] > pivit)
        {
            j--;
        }
        if (i < pivitIndex && pivitIndex < j)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return pivitIndex;
}
void quickSort(int arr[], int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }
    // koi ak value ko pivit manne ke liye
    int p = varior(arr, s, e);
    // left part ko sort korne kaliye
    quickSort(arr, s, p - 1);
    // right part ko sort korne kaliye
    quickSort(arr, p + 1, e);
}
int main()
{
    int arr[] = {1, 4, 2, 3, 6, 5};
    int n = 6;
    // quickSort function ko call korunga
    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}