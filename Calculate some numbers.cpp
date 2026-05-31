#include <iostream>
using namespace std;

int main()
{
  int num = 100;     
  cout << "The Max Number Of Numbers You Can Enter Is " << num << "\n";
  cout << "If you want to change it enter (y) If not (press any character)\n";
  char yes_no;
  cin >> yes_no;
  if (yes_no == 'y')
  {
    cout << "So enter the number that you want : ";
    cin >> num;
  }
  const int Max_Num = num;
  int nums[Max_Num];
  int result = 0;
  cout << "\nEnter Your numbers (When you end press any charachter) : \n";
  for (int i = 0; i < Max_Num; i++)
  {
    if (cin >> nums[i]){}
    else 
    break;
    result += nums[i];
  }
  cout << "the result is " << result;
  return 0;
}