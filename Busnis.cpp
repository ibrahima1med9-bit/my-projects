#include <iostream>
using namespace std;

int main()
{
  cout << "Enter your capital : ";
  double capital;
  cin >> capital;
  if (capital < 0)
  {
    cout << "Erorr \n";
    cout << "You can't Start With Negative Number\n";
    cout << "Please, Try Again\n";
    return 0;
  }
  double start_money = capital;
  double presnt;
  cout << "Enter your profit percentage : ";
  cin >> presnt;
  double percentage_Of_Charity;
  cout << "Entetr your charity Percentage From Profit : ";
  cin >> percentage_Of_Charity;
  double percentage_Of_Free_Money;
  cout << "Entetr your Free money Percentage From Profit : ";
  cin >> percentage_Of_Free_Money;
  double percentage_Of_Improving;
  cout << "Entetr your Percentage Of Improving Percentage From Profit : ";
  cin >> percentage_Of_Improving;

  if (percentage_Of_Improving + percentage_Of_Free_Money + percentage_Of_Charity > 100)
  {
    cout << "Erorr";
    return 0;
  }

  double profit = (capital * presnt) / 100;
  double charity = (profit * percentage_Of_Charity) / 100;
  double free_money = (profit * percentage_Of_Free_Money) / 100;
  double improve = (profit * percentage_Of_Improving) / 100;
  int returns;
  cout << "Choose If You Want To Calculate In Monthes (press \"m\") Or In Times (press \"t\") \n";
  char choose;
  cout << "Choose (m / t) : ";
  cin >> choose;
  if (choose == 'm')
  {
    cout << "Enter How Many Monthes You Want To Calculate : ";
    int monthes;
    cin >> monthes;
    cout << "Enter How Many Times You Return The Goods In One Month : ";
    int Returns_In_One_Month;
    cin >> Returns_In_One_Month;
    returns = monthes * Returns_In_One_Month;
  }
  else if (choose == 't')
  {
    cout << "Enter Number Of Returns You want : ";
    cin >> returns;
  }
  else
  {
    cout << "Erorr\n";
    cout << "You Did't Choose One Of These (\"m\", \"t\")\n";
    cout << "Please Try Again";
    return 0;
  }

  improve = 0;
  for (int i = 0; i < returns + 1; i++)
  {
    capital += improve;                                 // (100 + 0) = 100      | start_money = (100 + 6) = 106
    profit = (capital * presnt) / 100;                  // (100 * 10) /100 = 10 | profit = (106 * 10) / 100 = 10.6
    improve = (profit * percentage_Of_Improving) / 100; // (10 * 60) / 100 = 6  | improve = (10.6 *60) / 100 = 6.36
    charity += (profit * percentage_Of_Charity) / 100;
    free_money += (profit * percentage_Of_Free_Money) / 100;
  }
  cout << "\n=========================================\n";
  cout << "Capital After " << returns << " Times = " << capital << "\n";
  cout << "----------------------------------\n";
  cout << "Charity After " << returns << " Times = " << charity << "\n";
  cout << "----------------------------------\n";
  cout << "Free Money After " << returns << " Times = " << free_money << "\n";
  cout << "=========================================\n\n";
  double Final_Profit_Percentage = ((capital - start_money) * 100) / start_money;
  cout << "Start Money From " << start_money << " To " << capital << "\n";
  cout << "Which means " << Final_Profit_Percentage << "\% profit.\n";
  cout << "=========================================\n";
  return 0;
}
