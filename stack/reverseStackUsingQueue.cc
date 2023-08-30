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

class Queue
{
public:
    int size;
    int *arr;
    int rear;
    int front;
    Queue(int s)
    {
        size = s;
        arr = new int[size];
        rear = 0;
        front = 0;
    }
    void push(int element)
    {
        if (rear == size)
        {
            cout << "Full" << endl;
        }
        else
        {
            arr[rear] = element;
            rear++;
        }
    }
    void pop()
    {
        if (front == rear)
        {
            cout << "Empty" << endl;
        }
        else
        {
            arr[front] = -1;
            front++;
            if (front == rear)
            {
                rear = 0;
                front = 0;
            }
        }
    }
    int fron()
    {
        if (front == rear)
        {
            cout << "Empty" << endl;
        }
        else
        {
            return arr[front];
        }
    }
    bool isEmpty()
    {
        if (front == rear)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void print()
    {
        if (isEmpty())
        {
            cout << "Empty" << endl;
        }
        else
        {
            cout << "Queue: ";
            for (int i = front; i < rear; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};
void reverseStackUsingQueue(Stack &stack, Queue &queue)
{
    while (!stack.isEmpty())
    {
        int top = stack.peek();
        stack.pop();
        queue.push(top);
    }

    while (!queue.isEmpty())
    {
        int front = queue.fron();
        queue.pop();
        stack.push(front);
    }
}

int main()
{
    int size;
    cout << "Enter the size of the stack: ";
    cin >> size;

    Stack stack(size);
    Queue queue(size);

    cout << "Enter elements of the stack: ";
    for (int i = 0; i < size; i++)
    {
        int element;
        cin >> element;
        stack.push(element);
    }
    Stack stack1 = stack;
    while (!stack1.isEmpty())
    {
        cout << stack1.peek() << " ";
        stack1.pop();
    }
    cout << endl;
    reverseStackUsingQueue(stack, queue);

    cout << "Reversed Stack: ";
    while (!stack.isEmpty())
    {
        cout << stack.peek() << " ";
        stack.pop();
    }
    return 0;
}