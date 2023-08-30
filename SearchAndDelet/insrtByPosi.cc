#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int limit = size;
    int position = 1;
    int delVal = position;
    int element = 7;
    int ele = element;
    // dan pas teke suru kore bam pase aste hobe
    for (int i = size - 1; i >= position - 1; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[position - 1] = element;
    size++;
    if (position > limit)
    {
        cout << delVal << " Position Not found,insert valid position" << endl;
    }
    else
    {
        cout << element << " insert the array at position " << delVal << endl;
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
    }
}