#include <iostream>
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
void print(Queue &q)
{
    while (!q.empty())
    {
        cout << q.fron() << " ";
        q.pop();
    }
}
int main()
{
    Queue q(3);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    print(q);
}