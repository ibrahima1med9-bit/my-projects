#include <iostream>
using namespace std;

int main()
{
  const int horseshoes = 4;
  int colors[horseshoes];
  int counter = 0;
  for (int i = 0; i < horseshoes; i++)
  {
    cin >> colors[i];
  }
  for (int i = 0; i < horseshoes; i++)
  {
    for (int j = 0; j < i; j++)
    {
      if (colors[i] == colors[j])
      {
        counter++;
        break;
      }
    }
  }
  cout << counter;
  return 0;
}