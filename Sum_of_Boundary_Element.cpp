#include<iostream>
using namespace std;
int main()
{
     int m, n;
    cout << "Enter the number of rows and columns of the matrix: ";
    cin >> m >> n;

    int matrix[m][n];
    cout << "Enter the elements of the matrix:\n";
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
         {
             cin>>matrix[i][j];
        }
    }

    int sum_boundary = 0;

    for (int j=1; j<n-1; j++) {
        sum_boundary += matrix[0][j];
        sum_boundary += matrix[m-1][j];
    }

    for (int i =1; i<m-1; i++) {
        sum_boundary  += matrix[i] [0];
        sum_boundary += matrix[i][n-1];
    }


    if (m>1 && n>1)
    {
        sum_boundary += matrix[0][0];
        sum_boundary += matrix[0][n-1];
        sum_boundary += matrix[m-1][0];
        sum_boundary += matrix[m-1][n-1];
    }

    cout << "Sum of boundary elements: " << sum_boundary << endl;

    return 0;

}
