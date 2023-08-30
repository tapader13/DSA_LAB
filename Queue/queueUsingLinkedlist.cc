#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        data = d;
        next = NULL;
    }

    ~Node()
    {
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
    }
};

class Queue
{
private:
    Node *front;
    Node *rear;

public:
    Queue()
    {
        front = NULL;
        rear = NULL;
    }

    ~Queue()
    {
        if (front != NULL)
        {
            delete front;
            front = NULL;
        }
    }

    bool isEmpty()
    {
        return (front == NULL);
    }

    void enqueue(int value)
    {
        Node *newNode = new Node(value);
        if (rear == NULL)
        {
            front = rear = newNode;
        }
        else
        {
            rear->next = newNode;
            rear = newNode;
        }
    }

    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue underflow" << endl;
        }
        else
        {
            Node *temp = front;
            front = front->next;
            if (front == NULL)
            {
                rear = NULL;
            }
            temp->next = NULL;
            delete temp;
        }
    }

    int peek()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        else
        {
            return front->data;
        }
    }
};

int main()
{
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    // q.dequeue();
    cout << q.peek() << endl;
    cout << q.isEmpty() << endl;

    return 0;
}
