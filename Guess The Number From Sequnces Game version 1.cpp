#include <iostream>
#include <array>
using namespace std;

int main()
{
  cout << "====================================================\n";
  cout << "==Wlcome To Game \"Guess The Number From sequences\"==\n";
  cout << "====================================================\n\n\n";
  int correct_Mistakes[5];
  int points = 0 ;
  int answer[5];
  int sequences[5][6] = {
    {2, 4, 6, 8, 10, 12},
    {3, 6, 12, 24, 48, 96},
    {1, 1, 2, 3, 5, 8},
    {1, 4, 9, 16, 25, 36},
    {1, 8, 27, 64, 125, 216}
  };
  cout << "Qustion 1\n";   
  cout << "2, 4, 6, 8, 10, ??";
  cout << "\nType Your answer : ";
  cin >> answer[0];
  cout << "=======================\n";

  cout << "Qustion 2\n";
  cout << "3, 6, 12, 24, 48, ??";
  cout << "\nType Your answer : ";
  cin >> answer[1];
  cout << "=======================\n";
  
  cout << "Qustion 3\n";
  cout << "1, 1, 2, 3, 5, ??";
  cout << "\nType Your answer : ";
  cin >> answer[2];
  cout << "=======================\n";
  
  cout << "Qustion 4\n";
  cout << "1, 4, 9, 16, 25, ??\n";
  cout << "Type Your answer : ";
  cin >> answer[3];
  cout << "=======================\n";
  
  cout << "Qustion 5\n";
  cout << "1, 8, 27, 64, 125, ??";
  cout << "\nType Your answer : ";
  cin >> answer[4];
  cout << "=======================\n\n\n";
  if (answer[0] == sequences[0][5])
  {
    points++;
    correct_Mistakes[0] = true;

  }
  
  if (answer[1] == sequences[1][5])
  {
    points++;
    correct_Mistakes[1] = true;
  }
  
  if (answer[2] == sequences[2][5])
  {
    points++;
    correct_Mistakes[2] = true;
  }
  
  if (answer[3] == sequences[3][5])
  {
    points++;
    correct_Mistakes[3] = true;
  }
  
  if (answer[4] == sequences[4][5])
  {
    points++;
    correct_Mistakes[4] = true;
  }
  if (points == 5)
  {
    cout << "=======================================\n";
    cout << "==Congratulations, you got full marks==\n";
    cout << "=======================================\n";
  }
  else
  {
      cout << "====================\n";
      cout << "==You got " << points << " from 5==\n";
      cout << "====================\n";
      cout << "\n\n\nThe correct answers is : \n";
      cout << "\n==================================================================================================\n";
      if (correct_Mistakes[0] != true)
    {
      cout << "Answer For Qustion 1 Is\n";
      cout << "2, 4, 6, 8, 10, 12\n";
      cout << "Your Answer Is " << answer[0];
      cout << "\nThe Correct Anser Is " << sequences[0][5];
      cout << "\nInterpretation\n";
      cout << "The difference between consecutive terms is constant (2). So, the next number is 10 + 2 = 12.\n";
      cout << "===================\n";
    }
    
      if (correct_Mistakes[1] != true)
    {
      cout << "Answer For Qustion 2 Is\n";
      cout << "3, 6, 12, 24, 48, 96\n";
      cout << "Your Answer Is " << answer[1];
      cout << "\nThe Correct Anser Is " << sequences[1][5];
      cout << "\nInterpretation\n";
      cout << "Each term is multiplied by a constant factor (2). So, the next number is 48 * 2 = 96.\n";
      cout << "===================\n";
    }
      if (correct_Mistakes[2] != true)
    {
      cout << "Answer For Qustion 3 Is\n";
      cout << "1, 1, 2, 3, 5, 8\n";
      cout << "Your Answer Is " << answer[2];
      cout << "\nThe Correct Anser Is " << sequences[2][5];
      cout << "\nInterpretation\n";
      cout << "Each term is the sum of the two preceding ones. So, the next number is 3 + 5 = 8.\n";
      cout << "===================\n";
    }
      if (correct_Mistakes[3] != true)
    {
      cout << "Answer For Qustion 4 Is\n";
      cout << "1, 4, 9, 16, 25, 36\n";
      cout << "Your Answer Is " << answer[3];
      cout << "\nThe Correct Anser Is " << sequences[3][5];
      cout << "\nInterpretation\n";
      cout << "Each term is the square of a natural number. So, the next number is 62 = 36.\n";
      cout << "===================\n";
    }

      if (correct_Mistakes[4] != true)
    {
      cout << "Answer For Qustion 5 Is\n";
      cout << "1, 8, 27, 64, 125, 216\n";
      cout << "Your Answer Is " << answer[4];
      cout << "\nThe Correct Anser Is " << sequences[4][5];
      cout << "\nInterpretation\n";
      cout << "Each term is the cube of a natural number. So, the next number is 63 = 216\n";
    }
    cout << "==================================================================================================\n\n\n";
  }
  cout << "====================================\n";
  cout << "==I hope you enjoyed and benefited==\n";
  cout << "====================================\n";
  return 0;
}