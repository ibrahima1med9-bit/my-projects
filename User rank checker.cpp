#include <iostream>
using namespace std;

int main()
{
  int points;
  cout << "Enter your points please : \n";
  cin >> points;
  if (points > 0 && points < 500)
  cout << "Your rank is \"Not bad\" \n";
  else if (points >= 500 && points < 1000)
  cout << "Your rank is \"Good\" \n";
  else if (points >= 1000)
  cout << "Your rank is \"Legend\" \n";
  else 
  cout << "Sir, there are no negative points";
  return 0;
}
/* 
0 to 500 Not bad
501 to 1000 good
 > 1000 legend
*/