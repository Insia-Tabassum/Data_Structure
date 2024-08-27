#include <iostream>
using namespace std;

struct Node
{
    int data;
    //int nullptr;
    Node *next;
};

Node*top = nullptr;

void push(int data)
{
    if (top == nullptr)
    {
        top = new Node{data, nullptr};
    }
    else
    {
        Node *newNode = new Node{data, top};
        top = newNode;
    }
}

void printStack()
{
    if (top == nullptr)
    {
        cout << "Stack is empty" << endl;
        return;
    }

    Node *current = top;
    while (current != nullptr)
    {

        cout << current->data << " ";
        current = current->next;
    }

    cout << endl;
}

int main()
{
    push(1);
    push(2);
    push(3);

    printStack();

    return 0;
}
