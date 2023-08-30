#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int position = 4;
    // bam pas teke suru kore danpase jeta hobe
    for (int i = position - 1; i < position - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    size--;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}