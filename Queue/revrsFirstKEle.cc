#include <bits/stdc++.h>
using namespace std;
class Queue
{
public:
    int *arr;
    int front;
    int rear;
    int size;
    Queue(int s)
    {
        arr = new int[s];
        size = s;
        front = 0;
        rear = 0;
    }
    void push(int ele)
    {
        if (rear == size)
        {
            cout << "Full" << endl;
        }
        else
        {
            arr[rear] = ele;
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
                front = 0;
                rear = 0;
            }
        }
    }
    int fron()
    {
        if (front == rear)
        {
            return -1;
        }
        else
        {
            return arr[front];
        }
    }
    bool empty()
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
};
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
void print(Queue &q)
{
    while (!q.empty())
    {
        cout << q.fron() << " ";
        q.pop();
    }
}
Queue reverseK(Queue &q, int k)
{
    Stack st(k);
    Queue res(q.size);
    for (int i = 0; i < k; i++)
    {
        st.push(q.fron());
        q.pop();
    }

    while (k > 0)
    {
        res.push(st.peek());
        st.pop();
        k--;
    }
    while (!q.empty())
    {
        res.push(q.fron());
        q.pop();
    }
    return res;
}
int main()
{
    Queue q(5);
    int k = 3;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    Queue ans = reverseK(q, k);
    while (!ans.empty())
    {
        cout << ans.fron() << " ";
        ans.pop();
    }
    // print(q);
}