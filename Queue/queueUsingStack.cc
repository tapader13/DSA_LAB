#include <bits/stdc++.h>
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
class Queue
{
    Stack s1, s2;

public:
    Queue(int s) : s1(s), s2(s){};

    void enQueue(int x)
    {
        while (!s1.isEmpty())
        {
            s2.push(s1.peek());
            s1.pop();
        }
        s1.push(x);
        while (!s2.isEmpty())
        {
            s1.push(s2.peek());
            s2.pop();
        }
    }

    int deQueue()
    {
        if (s1.isEmpty())
        {
            return -1;
        }
        int x = s1.peek();
        s1.pop();
        return x;
    }
    int peek()
    {
        if (s1.isEmpty())
        {
            return -1;
        }
        int x = s1.peek();

        return x;
    }
    bool empty()
    {
        if (s1.isEmpty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Queue q(4);
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    while (!q.empty())
    {
        cout << q.peek() << " ";
        q.deQueue();
    }
    // cout << q.deQueue() << '\n';
    // cout << q.deQueue() << '\n';
    // cout << q.deQueue() << '\n';

    return 0;
}
