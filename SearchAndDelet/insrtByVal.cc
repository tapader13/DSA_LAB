#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int val = 6;
    int delVal = val;
    int size = 5;
    int pos = -2;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == val)
        {
            pos = i;
            break;
        }
    }
    for (int i = pos; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
    size--;
    if (pos == -2)
    {
        cout << delVal << " Not found,insert valid element" << endl;
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
