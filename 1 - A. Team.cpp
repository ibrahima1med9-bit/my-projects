#include <iostream>
using namespace std;

int main()
{
  const int num_of_stud = 3;
  int num_of_qus;
  cin >> num_of_qus;
  int arr[num_of_qus][num_of_stud];
  int knowen_qus = 0;
  for (int i = 0; i < num_of_qus; i++)
  {
    int counter = 0;
    for (int j = 0; j < num_of_stud; j++)
    {
      cin >> arr[i][j];
      if (arr[i][j] == true)
        counter++;
    }
    if (counter >= 2)
      knowen_qus++;
  }
  cout << knowen_qus << "\n";
  return 0;
}