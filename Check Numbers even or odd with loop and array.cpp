#include <iostream>
using namespace std;

int main() 
{
  int even = 0, odd = 0;
  const int max_numbers = 1000;
  int numbers[max_numbers];
  int count = 0;
  cout << "Type some numbers please \n";
  cout << "========\n";
  cout << "==Note==\n";
  cout << "========\n";
  cout << "====================================\n";
  cout << "The max numbers you can type is " << max_numbers << "\n";
  cout << "====================================\n";
  cout << "When you done type any character like \"a\" \"b\"\n";
  for (int i = 0; i < max_numbers; i++)
  {
    if(cin >> numbers[i])
    {

    }
    else
    {
      cout << "Invalid input detected. Stopping...\n";
      break;
    }
    if (numbers[i] % 2 == 0)
    {
      even++;
    }
    else
    {
      odd++;
    }
  }
  cout << "Number of even numbers is : " << even << "\n"; 
  cout << "Number of odd numbers is : " << odd << "\n"; 
  return 0;
}

