#include <iostream>

using namespace std;

struct Node
{
    int val;
    Node* next;

    Node(int value)
    {
        val = value;
        next = nullptr;
    }
};

Node* swapPairs(Node* head)
{
    if (head == nullptr || head->next == nullptr)
        return head;

    Node* second = head->next;

    head->next = swapPairs(second->next);
    second->next = head;

    return second;
}

void printList(Node* head)
{
    if (head == nullptr)
        return;

    cout << head->val << " ";

    printList(head->next);
}

int main()
{
    Node* first = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);

    first->next = second;
    second->next = third;
    third->next = fourth;

    cout << "Before: ";
    printList(first);

    first = swapPairs(first);

    cout << "\nAfter: ";
    printList(first);

    cout << endl;

    return 0;
}
