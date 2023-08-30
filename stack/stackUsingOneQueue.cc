#include <iostream>
using namespace std;

class Queue
{
public:
    static const int maxSize = 100;
    int arr[maxSize];
    int rear = 0;
    int front = 0;

    void push(int element)
    {
        if (rear == maxSize)
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

    int frontValue()
    {
        if (front == rear)
        {
            cout << "Empty" << endl;
            return -1;
        }
        else
        {
            return arr[front];
        }
    }

    bool isEmpty()
    {
        return front == rear;
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

class Stack
{
public:
    Queue q;

    void push(int x)
    {
        int size = q.rear - q.front;
        q.push(x);
        for (int i = 0; i < size; i++)
        {
            q.push(q.frontValue());
            q.pop();
        }
    }

    void pop()
    {
        if (!q.isEmpty())
            q.pop();
    }

    int top()
    {
        if (!q.isEmpty())
            return q.frontValue();
        return -1;
    }

    bool isEmpty()
    {
        return q.isEmpty();
    }
};

int main()
{
    Stack s;

    s.push(1);
    s.push(2);
    s.push(3);

    cout << s.top() << endl;

    s.pop();
    cout << s.top() << endl;

    cout << boolalpha << s.isEmpty() << endl;

    s.pop();
    s.pop();
    cout << boolalpha << s.isEmpty() << endl;

    return 0;
}
