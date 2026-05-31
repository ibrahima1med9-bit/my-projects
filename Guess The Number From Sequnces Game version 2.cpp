#include <iostream>
using namespace std;

int main()
{
  cout << "====================================================\n";
  cout << "==Wlcome To Game \"Guess The Number From sequences\"==\n";
  cout << "====================================================\n\n\n";
  const int num_of_questions = 5;
  int check_mistakes[num_of_questions];
  int points = 0 ;
  int true_answers[num_of_questions];
  int user_answers[num_of_questions];
  int seq[num_of_questions][6] = {
    {2, 4, 6, 8, 10, 12},
    {3, 6, 12, 24, 48, 96},
    {1, 1, 2, 3, 5, 8},
    {1, 4, 9, 16, 25, 36},
    {1, 8, 27, 64, 125, 216}
    };
  for (int i = 0; i < size(seq); i++)
  {
    cout << "======================\n";
    true_answers[i] = seq[i][size(seq[i]) - 1];
    cout << "Qustion " << i + 1 << endl;
    for (int j = 0; j < size(seq[i]) - 1; j++)
    {
      cout << seq[i][j] << ", ";
    }
    cout << "??" << endl;
    cout << "Type your answer : ";
    cin >> user_answers[i];
    cout << "======================\n\n";
    if (user_answers[i] == true_answers[i])
    {
      check_mistakes[i] = true;
      points++;
    }
  }

  if (points == size(true_answers))
  {
    cout << "=======================================\n";
    cout << "==Congratulations, you got full marks==\n";
    cout << "=======================================\n\n";
  }

  cout << "you got " << points << " from " << size(seq);

  cout << "\n\n==================\n";
  for (int i = 0; i < size(true_answers); i++)
  {
    if (check_mistakes[i] != true)
    {
      cout << "Qustion " << i + 1 << "\n";
      cout << "========\n\n";
      cout << "Your answer is  " << user_answers[i] << "\n";
      cout << "The true answers is " << true_answers[i] << "\n";
      cout << "\n=====================\n";
    }
  }
  cout << "\n\n====================================\n";
  cout << "==I hope you enjoyed and benefited==\n";
  cout << "====================================\n";
  return 0;
}
