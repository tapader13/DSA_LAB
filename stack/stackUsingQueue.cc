#include <iostream>
using namespace std;
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
class Stack
{
public:
    Queue q1, q2;
    int stackSize;
    Stack(int s) : q1(s), q2(s)
    {
        stackSize = 0;
    };

    void push(int x)
    {

        q2.push(x);

        while (!q1.isEmpty())
        {
            q2.push(q1.fron());
            q1.pop();
        }

        Queue q = q1;
        q1 = q2;
        q2 = q;
        stackSize++;
    }

    void pop()
    {
        if (q1.isEmpty())
            return;
        q1.pop();
        stackSize--;
    }

    int top()
    {
        if (q1.isEmpty())
            return -1;
        return q1.fron();
    }

    int size() { return stackSize; }
};

int main()
{
    Stack s(3);
    s.push(1);
    s.push(2);
    s.push(3);

    cout << "current size: " << s.size() << endl;
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;

    cout << "current size: " << s.size() << endl;
    return 0;
}
