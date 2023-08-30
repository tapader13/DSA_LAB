#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    Node *next;
    int data;
    Node(int data)
    {
        next = NULL;
        this->data = data;
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

void printList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void solve(Node *first, Node *second)
{
    Node *curr1 = first;
    Node *next1 = curr1->next;

    Node *curr2 = second;
    Node *next2 = curr2->next;

    while (next1 != NULL && curr2 != NULL)
    {
        if (curr2->data >= curr1->data && curr2->data <= next1->data)
        {
            curr1->next = curr2;
            curr2->next = next1;
            curr1 = curr2;
            curr2 = next2;
            next2 = curr2 ? curr2->next : NULL;
        }
        else
        {
            if (next1->next != NULL)
            {
                next1 = next1->next;
                curr1 = curr1->next;
            }
            else
            {
                next1->next = curr2;
                return;
            }
        }
    }
}

Node *sortTwoLists(Node *first, Node *second)
{
    if (first == NULL)
        return second;

    if (second == NULL)
        return first;

    if (first->data <= second->data)
    {
        solve(first, second);
        return first;
    }
    else
    {
        solve(second, first);
        return second;
    }
}

int main()
{
    Node *list1 = new Node(1);
    list1->next = new Node(3);
    list1->next->next = new Node(5);

    Node *list2 = new Node(2);
    list2->next = new Node(4);
    list2->next->next = new Node(6);

    cout << "List 1: ";
    printList(list1);

    cout << "List 2: ";
    printList(list2);

    Node *sortedMerged = sortTwoLists(list1, list2);

    cout << "Merged and Sorted List: ";
    printList(sortedMerged);

    return 0;
}