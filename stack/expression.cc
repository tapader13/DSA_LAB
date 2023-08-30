#include <iostream>
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

bool areBracketsBalanced(string expr)
{
    Stack temp(expr.length());

    for (int i = 0; i < expr.length(); i++)
    {
        if (temp.isEmpty())
        {
            temp.push(expr[i]);
        }
        else if ((temp.peek() == '(' && expr[i] == ')') ||
                 (temp.peek() == '{' && expr[i] == '}') ||
                 (temp.peek() == '[' && expr[i] == ']'))
        {
            temp.pop();
        }
        else
        {
            temp.push(expr[i]);
        }
    }

    return temp.isEmpty();
}

int main()
{
    string expr = "{()}[]";

    if (areBracketsBalanced(expr))
        cout << "Balanced" << endl;
    else
        cout << "Not Balanced" << endl;

    return 0;
}
