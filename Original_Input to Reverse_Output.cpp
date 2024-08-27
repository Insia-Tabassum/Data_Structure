#include <iostream>
#include <cstring>
using namespace std;

const int Max_Size = 100;
char stack[Max_Size];
int top=-1;

void push(char data)
{
    if (top == Max_Size-1)
    {
        cout << "Stack overflow" << endl;
        return;
    }
    stack[++top] = data;
}

void printStackReverse()
{
    if (top==-1)
    {
        cout << "Stack is empty" << endl;
        return;
    }

    for (int i=top; i>=0; i--)
    {
        cout << stack[i];
    }
    cout << endl;
}

int main()
{
    const char *input = "American International";
    cout << "Original Input: " << input << endl;
    for (int i = 0; i < strlen(input); i++)
    {
        push(input[i]);
    }
    cout << "Reversed Output: ";
    printStackReverse();

    return 0;
}
