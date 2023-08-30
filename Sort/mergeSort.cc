#include <iostream>
using namespace std;
void merge(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;
    // first and second array ka length bahar korne kaliye
    int len1 = mid - s + 1;
    int len2 = e - mid;
    // first and second array declire kardiya
    int *first = new int[len1];
    int *second = new int[len2];
    int mainIndex = s;
    // first array copy kordiya
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainIndex++];
    }
    mainIndex = mid + 1;
    // second array copy kordiya
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainIndex++];
    }
    int index1 = 0;
    int index2 = 0;
    mainIndex = s;
    // first and second array ko combined karne kaliye
    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainIndex++] = first[index1++];
        }
        else
        {
            arr[mainIndex++] = second[index2++];
        }
    }
    // agar array1 ka length jayda hogaya t
    while (index1 < len1)
    {

        arr[mainIndex++] = first[index1++];
    }
    // agar array2 ka length jayda hogaya t
    while (index2 < len2)
    {

        arr[mainIndex++] = second[index2++];
    }
}
void mergeSort(int *arr, int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }
    int mid = s + (e - s) / 2;
    // left side ka sort
    mergeSort(arr, s, mid);
    // right side ka sort
    mergeSort(arr, mid + 1, e);
    // du array ko merge karne kaliye
    merge(arr, s, e);
}
int main()
{
    int arr[5] = {1, 5, 2, 4, 3};
    int n = 5;
    // mergeSort to call kora diya
    mergeSort(arr, 0, n - 1);
    // array sort karne ka bad print karne kaliye
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
// time complexity yeha pe O(nlogn) , space complexity O(n) honeoal.