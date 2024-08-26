#include<iostream>
using namespace std;
int main()
{
    int arr[10]={1,2,3,45,5,6,88,4,90,55};
    float oddsum=0,evensum=0,oddavg,evenavg;
    int oddcount=0,evencount=0;

    for( int i=0;i<10;i++)
    {
        if (arr[i]%2==0)
        {

        evensum +=arr[i];
        evencount++;
        }
        else
        {
            oddsum +=arr[i];
            oddcount++;
        }
        evenavg=evensum/evencount;
        oddavg=oddsum/oddcount;

    }

    cout<<"Enter the Even-Sum Number:"<<evensum<<endl;
    cout<<"Enter the Even-Avg Number:"<<evenavg<<endl;
    cout<<"Enter the Odd-Sum Number:"<<oddsum<<endl;
    cout<<"Enter the Odd-Avg Number:"<<oddavg<<endl;

}
