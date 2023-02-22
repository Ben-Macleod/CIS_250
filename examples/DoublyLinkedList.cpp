// Includes
#include <iostream>

// Namespaces
using namespace std;

// List Node Structure
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

// Entry Point.
int main()
{

    Node* head_node = new Node();
    Node* end_node = new Node();

    // Assign head node properties.
    head_node -> data = 10;
    head_node -> prev = NULL;

    Node* second_node = new Node();

    // Assign Second node properties.
    second_node -> data = 20;
    second_node -> next = end_node;
    second_node -> prev = head_node;

    // Set the heads next node to the second node.
    head_node -> next = second_node;

    end_node -> prev = second_node;
    end_node -> next = NULL;
    end_node -> data = 30;

    // Traverse the list forwards.
    while (head_node != NULL)
    {
        cout << head_node -> data << " ";
        head_node = head_node -> next;
    }

    // Traverse the list backwards.
    while (end_node != NULL)
    {
        cout << second_node -> data << " ";
        second_node = second_node -> prev;
    }

}