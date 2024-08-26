#include <stdio.h>
#include<iostream>
using namespace std;

struct Student {

    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student students[2];

    // Input data for five students
    for (int i = 0; i < 2; i++) {
        cout<<"Enter student  details:\n"<< i + 1;

        cout<<"Roll number: ";
        cin>> students[i].roll;
        cout<<"Name: ";
        cin>> students[i].name;
        cout<<"Marks: ";
        cin>>students[i].marks;


    }

return 0;
}

