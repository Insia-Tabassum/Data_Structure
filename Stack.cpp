#include <iostream>
using namespace std;
int stack[100];
int top=-1;

void push(int data)
{
    if (top==100-1){
        cout<<"Stack Overflow:"<<endl;
    return;
    }
    stack[++top]=data ;

}
void printStack()
{

    if (top == -1)
    {
        cout << "Stack is empty" << endl;
        return ;
    }

    for (int i=top;i>=0;i--)
    {
        cout<<stack[i]<< " ";
    }

    cout<<endl;
}
int main()
{

    push(1);
    push(2);
    push(3);
    printStack();
    return 0;
}
