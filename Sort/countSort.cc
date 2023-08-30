#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {1, 0, 0, 1, 3, 4, 5, 2, 4, 2};
    int n = 10;
    // highest element
    int r = 5;
    int count[6] = {0, 0, 0, 0, 0, 0};
    int output[10] = {};
    // array r value ko count array ka index banadiya
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }
    // count first ka sat next value ko sum kor diya
    for (int i = 0; i <= r; i++)
    {
        count[i] = count[i] + count[i - 1];
    }
    // end pe suru kiya.array ka value ke sat count ka index ka value dicress kora.
    for (int i = n - 1; i >= 0; i--)
    {
        output[--count[arr[i]]] = arr[i];
    }
    // main array pe element ko copy kora.
    for (int i = 0; i < n; i++)
    {
        arr[i] = output[i];
    }
    // print kiya sort array ko.
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}