#include <iostream>
using namespace std;

int main()
{
  string user_name;
  cin >> user_name;
  int size_chars = size(user_name);
  int distinct_characters = size_chars;
  for (int i = 0; i < size_chars; i++)
  {
    for (int j = 0; j < i; j++)
    {
      if (user_name[i] == user_name[j])
      {
        distinct_characters--;
        break;
      }
    }
  }
  if (distinct_characters % 2 == 0)
    cout << "CHAT WITH HER!";
  else
    cout << "IGNORE HIM!";
  return 0;
}