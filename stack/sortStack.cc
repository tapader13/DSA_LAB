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
void pushAllBack(Stack &st, int val)
{
    if (st.isEmpty() || st.peek() < val)
    {
        st.push(val);
        return;
    }
    int res = st.peek();
    st.pop();
    pushAllBack(st, val);
    st.push(res);
}
void sortStk(Stack &st)
{
    if (st.isEmpty())
    {

        return;
    }
    int ele = st.peek();
    st.pop();
    sortStk(st);
    pushAllBack(st, ele);
}
void printStack(Stack st)
{
    cout << "Stack: ";
    for (int i = st.top; i >= 0; i--)
    {
        cout << st.arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(5);
    st.push(3);
    st.push(2);
    sortStk(st);
    printStack(st);
}