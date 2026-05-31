#include <iostream>
using namespace std;

void sort(int arr[], int size_arr)
{
  cout << "===================\n";
  cout << "start sort function\n";
  cout << "===================\n";
  cout << "\n\n\n";
  for (int i = 0; i < size_arr; i++)
  {
    cout << "=================\n";
    cout << "start loop " << i << endl;
    cout << "=================\n";

    for (int i = 0; i < size_arr; i++)
    {
      cout << arr[i];
      if (i < size_arr - 1)
      {
        cout << ", ";
      }
    }
    cout << "\n";

    cout << "==============================================\n";
    cout << "i = " << i << "\n";
      cout << "size_arr - i - 1 = " << size_arr - i - 1 << "\n";
    for (int j = 0; j < size_arr - i - 1; j++)
    {
      cout << "j = " << j << "\n";
      cout << "arr[j] = " << arr[j] << "\n";
      cout << "arr[j + 1] = " << arr[j + 1] << "\n";
      if (arr[j] > arr[j + 1])
      {
        cout << "yes\n";
        for (int i = 0; i < size_arr; i++)
        {
          cout << arr[i];
          if (i < size_arr - 1)
          {
            cout << ", ";
          }
        }
        cout << "\n==========================================\n";
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        for (int i = 0; i < size_arr; i++)
        {
          cout << arr[i];
          if (i < size_arr - 1)
          {
            cout << ", ";
          }
        }
        cout << "\n";
      }
      else
      {
        cout << "skip";
      }
      cout << "\n\n\n";
    }

    for (int i = 0; i < size_arr; i++)
    {
      cout << arr[i];
      if (i < size_arr - 1)
      {
        cout << ", ";
      }
    }
    cout << "\n=================\n";
    cout << "end first loop " << i << endl;
    cout << "=================\n";
    cout << "\n\n===============================================================================\n\n\n";
  }
  cout << "\n\n\n";
  cout << "===================\n";
  cout << "end sort function\n";
  cout << "===================\n";
}

int main()
{
  int nums[] = {10, -10, 50, 100, 200, 10, 20, -20, -100};
  int size_nums = size(nums);
  cout << "size_array = " << size_nums << "\n";
  cout << "=============\n";
  cout << "=Before sort=\n";
  cout << "=============\n";
  for (int i = 0; i < size_nums; i++)
  {
    cout << nums[i];
    if (i < size_nums - 1)
    {
      cout << ", ";
    }
  }
  cout << "\n==============================================\n\n";
  sort(nums, size_nums);
  cout << "============\n";
  cout << "=After sort=\n";
  cout << "============\n";
  for (int i = 0; i < size_nums; i++)
  {
    cout << nums[i];
    if (i < size_nums - 1)
    {
      cout << ", ";
    }
  }

  return 0;
}