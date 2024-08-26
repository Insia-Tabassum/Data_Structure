#include<iostream>
using namespace std;
int main()
{
    int arr[15]={1,2,3,4,5,6,7,8,9,10,11,23,44,95,88};
    int large=arr[0],small=arr[0];
    for(int i=0;i<15;i++)
    {
        if(arr[i]>large)
        {
            large=arr[i];
        }

       for(int i=0;i<15;i++)
       {
           if(arr[i]<small)
           {
               small=arr[i];
           }
       }

    }
    cout<<"Enter the largest Number:"<<large<<endl;
    cout<<"Enter the smallest Number:"<<small<<endl;

}

