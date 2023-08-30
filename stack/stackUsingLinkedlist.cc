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
class Stack
{
public:
    Node *top;
    Stack()
    {
        top = NULL;
    }
    void push(int element)
    {
        Node *temp = new Node(element);
        if (!temp)
        {
            cout << "Stack overflow" << endl;
        }
        temp->data = element;
        temp->next = top;
        top = temp;
    }
    void pop()
    {
        if (top == NULL)
        {
            cout << "Stack underflow" << endl;
        }
        else
        {
            Node *temp = top;
            top = top->next;
            temp->next = NULL;
            delete temp;
        }
    }
    bool isEmpty()
    {
        if (top == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    int peek()
    {
        if (isEmpty())
        {
            cout << "Empty" << endl;
        }
        else
        {
            return top->data;
        }
    }
};

int main()
{
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    // st.pop();
    cout << st.peek() << endl;
    cout << st.isEmpty() << endl;
}