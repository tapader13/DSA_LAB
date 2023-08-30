#include <iostream>

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node *uniqueSortedList(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return NULL; // Empty or single-node list has no duplicates
    }

    Node *curr = head;

    while (curr->next != NULL)
    {
        if (curr->data == curr->next->data)
        {
            Node *nodeToDelete = curr->next;
            curr->next = curr->next->next;
            delete nodeToDelete;
        }
        else // not equal
        {
            curr = curr->next;
        }
    }
    return head;
}

// Function to print the linked list
void printList(Node *head)
{
    Node *current = head;
    while (current != NULL)
    {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

int main()
{
    // Creating the sorted linked list: 1 -> 2 -> 2 -> 3 -> 4 -> 4 -> 5
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(2);
    head->next->next->next = new Node(3);
    head->next->next->next->next = new Node(4);
    head->next->next->next->next->next = new Node(4);
    head->next->next->next->next->next->next = new Node(5);

    std::cout << "Original Linked List: ";
    printList(head);

    Node *newHead = uniqueSortedList(head);

    std::cout << "Linked List after removing duplicates: ";
    printList(newHead);

    // Clean up memory (deallocate nodes)
    while (newHead != NULL)
    {
        Node *temp = newHead;
        newHead = newHead->next;
        delete temp;
    }

    return 0;
}
