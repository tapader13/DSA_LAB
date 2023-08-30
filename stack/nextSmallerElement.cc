#include <iostream>
#include <vector>
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
void printStack(Stack st)
{
    cout << "Stack: ";
    for (int i = st.top; i >= 0; i--)
    {
        cout << st.arr[i] << " ";
    }
    cout << endl;
}
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    Stack st(n);
    st.push(-1);
    vector<int> ans(n);

    for (int i = n - 1; i >= 0; i--)
    {
        int curr = arr[i];
        while (st.peek() >= curr)
        {
            st.pop();
        }
        ans[i] = st.peek();
        st.push(curr);
    }
    return ans;
}
int main()
{
    vector<int> result = {2, 1, 4, 3};
    int n = result.size();
    vector<int> res = nextSmallerElement(result, n);
    for (auto i : res)
    {
        cout << i << " ";
    }
    // printStack(st);
}