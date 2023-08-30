#include <iostream>
#include <string>
using namespace std;

class Stack
{
public:
    int top;
    int size;
    char *arr;

    Stack(int s)
    {
        top = -1;
        size = s;
        arr = new char[size];
    }

    void push(char data)
    {
        if (top < size - 1)
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

    char peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "Stack is empty" << endl;
            return '\0';
        }
    }

    bool isEmpty()
    {
        return (top == -1);
    }
};

string reverseString(const string &input)
{
    Stack charStack(input.length());

    for (char c : input)
    {
        charStack.push(c);
    }

    string reversedString;
    while (!charStack.isEmpty())
    {
        reversedString += charStack.peek();
        charStack.pop();
    }

    return reversedString;
}

int main()
{
    string input;
    cout << "Enter a string: ";
    cin >> input;

    string reversed = reverseString(input);
    cout << "Reversed string: " << reversed << endl;

    return 0;
}
