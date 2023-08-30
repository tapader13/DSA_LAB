#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int limit = size;
    int position = 7;
    int delVal = position;
    // bam pas teke suru kore danpase jeta hobe
    for (int i = position - 1; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    size--;
    if (position > limit)
    {
        cout << delVal << " Not found,insert valid position" << endl;
    }
    else
    {
        cout << delVal << " delete from the array" << endl;
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
    }
}