#include <iostream>
using namespace std;

int main()
{
  int num1, num2, add, sub, multipli, adivision;
  char Calculation;
  cout << "==================================\n";
  cout << "==Welcome to a simple Calculator==\n";
  cout << "==================================\n";
  cout << "There is simple operations \"+\" , \"-\" , \"*\" , \"/\" \n";
  cout << "Please Enter Your Calculation : \n";
  cin >> num1 >> Calculation >> num2;
  add = num1 + num2;
  sub = num1 - num2;
  multipli = num1 * num2;
  adivision = num1 / num2;
  switch(Calculation)
  {
    case '+' :
    cout << add;
    break;
    case '-' :
    cout << sub;
    break;
    case '/' :
    cout << adivision;
    break;
    case '*' :
    cout << multipli;
    break;
    default :
    cout << "Sorry, but I can't do this calculation";
  }
  return 0; 
}
