#include <iostream>
using namespace std;

int main()
{
  int num;
  cout << "Enter any number please : ";
  cin >> num;
  if (num % 2 == 0)
  cout << "Your number \"" << num  << "\" is Even";
  else 
  cout << "Your number \"" << num  << "\" is Odd";
  return 0;
}
