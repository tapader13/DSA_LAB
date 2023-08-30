#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int position = 4;
    int element = 6;
    // dan pas teke suru kore bam pase aste hobe
    for (int i = size - 1; i >= position - 1; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[position - 1] = 6;
    size++;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}