#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 5, 2, 3, 3};
    int k = 3;
    int n = 5;
    cout << k << "th position = ";
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == k)
        {
            cout << i << " ";
        }
    }
}