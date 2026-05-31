#include <iostream>
using namespace std;

void calculator(int num1, char op, int num2)
{
  switch (op)
  {
    case '+' :
    cout << num1 + num2;
    break;
    case '-' :
    cout << num1 - num2;
    break;
    case '*' :
    cout << num1 * num2;
    break;
    case '/' :
    cout << double(num1) / double(num2);
    break;
    default :
    cout << "I can't calculate this";
  }
}

int main()
{
  int num1, num2;
  char op;
  cout << "==================================\n";
  cout << "==Welcome to a simple calculator==\n";
  cout << "==================================\n";
  cout << "you can use these oprations [+], [-], [*], [/]\n";
  cout << "Please Type\nNumber 1 > Operation like [+] > Number 2\n";
  cin >> num1 >> op >> num2;
  calculator(num1, op, num2);
  return 0;
}