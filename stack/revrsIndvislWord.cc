#include <iostream>
using namespace std;
class Stack
{
public:
    int top;
    int size;
    int *arr;
    Stack(int s)
    {
        top = -1;
        size = s;
        arr = new int[size];
    }
    void push(int data)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = data;
        }
        else
        {
            cout << "Stack overflow" << endl;
        }
    }
    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack underflow" << endl;
        }
    }
    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "Stack is empty" << endl;
        }
    }
    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
void reverseWords(string str, int size)
{
    Stack st(size);
    for (int i = 0; i < size; ++i)
    {
        if (str[i] != ' ')
            st.push(str[i]);
        else
        {
            while (st.isEmpty() == false)
            {
                cout << (char)st.peek();
                st.pop();
            }
            cout << " ";
        }
    }
}
int main()
{
    string str = "minhaj tapader";
    str += ' ';
    int i = 0, cnt = 0;
    while (str[i] != '\0')
    {
        cnt++;
        i++;
    }
    // cout << cnt;
    reverseWords(str, cnt);
}