/*
 Application To Create
  --- Create App Ask You To Type Number Of Kilobytes
  --- Write 3 Lines Contains
  ------ [1] The Number Of Kilobytes That User Input
  ------ [2] The Number Of Bytes
  ------ [3] The Number Of Bits
*/ 

#include <iostream>
using namespace std;

int main()
{
  cout << "Enter number of kilobytes : " ;
  int kilobytes;
  cin >> kilobytes;
  // cout << kilobytes << "\n";
  int bytes ;
  cout << "=============================\n";
  bytes = kilobytes * 1024 ;
  cout << kilobytes << " kilobytes = " << bytes << " bytes" << "\n";
  cout << "----------------------------------\n";
  int bits ;
  bits = bytes * 8 ;
  cout << bytes << " bytes = " << bits << " bits" << "\n";
  cout << "----------------------------------\n";
}
/*
- Application To Create
  --- Create App Ask You To Type Number Of Kilobytes
  --- Write 3 Lines Contains
  ------ [1] The Number Of Kilobytes That User Input
  ------ [2] The Number Of Bytes
  ------ [3] The Number Of Bits
*/