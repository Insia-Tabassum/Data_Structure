#include <iostream>
using namespace std;

int main()
{
  const int num_students = 10;
  const int num_quizzes = 4;

  int scores[num_students][num_quizzes];

  cout << "Enter quiz scores for each student (4 scores each):\n";
  for (int i=0; i<num_students;i++)
    {
      for (int j=0; j<num_quizzes;j++) {
      cin >> scores[i][j];
    }
  }


  double best_three_averages[num_students];
  for (int i = 0; i < num_students; ++i)
    {
       double sum = 0;
       for (int j = 0; j < 3; ++j)
       {
         sum += scores[i][j];
       }
       best_three_averages[i] = sum / 3.0;
   }

  // Print results
  cout << "\nStudent\tAverage of Best Three Quizzes\n";
  for (int i = 0; i < num_students; ++i)
    {
      cout << i + 1 << "\t\t" << best_three_averages[i] << endl;
    }

  return 0;
}
