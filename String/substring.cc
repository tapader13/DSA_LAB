#include <iostream>

using namespace std;

int main()
{
    string str1 = "learningatg";
    string str2 = "tg";
    int i = 0, c = 0, k = 0;

    while (i < str1.length())
    {
        int m = 0;
        while (i < str1.length() && m < str2.length() && str1[i] == str2[m])
        {

            i++;
            m++;
            if (m == str2.length())
            {
                k = i - str2.length();
                c++;
                break;
            }
        }
        i++;
    }
    if (c != 0)
    {
        cout << k << " ";
    }
    cout << c;
    return 0;
}