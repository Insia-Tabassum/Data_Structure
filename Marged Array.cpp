#include<iostream>
using namespace std;
int main()
{
    int arr1[]={2,5,6,7,10};
    int size1=sizeof(arr1)/sizeof(arr1[0]);

    int arr2[]={1,5,6,8,12};
    int size2=sizeof(arr2)/sizeof(arr2[0]);

    int mergedsize=size1+size2;
    int mergedArray[mergedsize];

    for(int i=0;i<size1;i++)
    {
        mergedArray[i]=arr1[i];
    }

    for(int i=0;i<size2;i++)
    {

        mergedArray[size1+i]=arr2[i];
    }

    cout<<"Marged Array:"<<endl;

    for(int i=0;i<mergedsize;i++)
    {
        cout<<mergedArray[i]<<" ";
    }
}
