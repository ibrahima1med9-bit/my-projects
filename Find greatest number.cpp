#include <iostream>
using namespace std;

int main()
{
  int num1, num2, num3;
  cout << "Enter Three Numbers please : ";
  cin >> num1 >> num2 >> num3;
  if (num1 >= num2 && num1 >= num3 )
  cout << "The greatest number you entered is " << num1;
  else if (num2 >= num1 && num2 >= num3)
  cout << "The greatest number you entered is " << num2;
  else
  cout << "The greatest number you entered is " << num3;

  return 0;
}
