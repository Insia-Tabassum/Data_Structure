#include<iostream>
using namespace std;
int main()
{
    int n;
   cout << "Enter the size of the square matrix: ";
   cin >> n;

   int matrix[n][n];
   cout << "Enter the elements of the matrix /n:";
   for (int i = 0; i < n; i++)
   {
       for (int j = 0; j < n; j++)
       {
           cin >> matrix[i][j];
       }
   }

   int sum_diagonal = 0;
   for (int i=0; i<n; i++)
    {
       sum_diagonal += matrix[i][i];
    }
    cout << "Sum of primary diagonal elements: " << sum_diagonal << endl;

   int sum_secondary_diagonal = 0;
   for (int i=0; i<n; i++)
    {
        sum_secondary_diagonal += matrix[i][n-i-1];

    }


   cout << "Sum of secondary diagonal elements: " << sum_secondary_diagonal << endl;

   return 0;

}
