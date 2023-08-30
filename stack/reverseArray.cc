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

    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "Stack is empty" << endl;
            return 0;
        }
    }

    bool isEmpty()
    {
        return (top == -1);
    }
};

void reverseArray(int arr[], int size)
{
    Stack numStack(size);

    for (int i = 0; i < size; i++)
    {
        numStack.push(arr[i]);
    }

    for (int i = 0; i < size; i++)
    {
        arr[i] = numStack.peek();
        numStack.pop();
    }
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter elements of the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    reverseArray(arr, size);

    cout << "Reversed array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
