#include <iostream>
using namespace std;

int main()
{
    int age, pionts, rank;
    cout << "Enter Your age please : ";
    cin >> age;
    if (age >= 1 && age < 120)
    {
        if (age >= 18)
        {
            cout << "Your \"age\" is ok\n";
            cout << "Enter Your pionts please : ";
            cin >> pionts;
            
            if (pionts >= 1000)
            {
                cout << "Your \"pionts\" is ok\n";
                cout << "Enter Your rank please : ";
                cin >> rank;
                if (rank >= 9)
                {
                    cout << "Your \"rank\" is ok\n";
                    cout << "==========\n" << "==Wlcome==\n" << "==========\n";
                }
                    else cout << "I am sorry but you can't Enter because of your  \"rank\"\n\n"; 
            }
                else cout << "I am sorry but you can't Enter because of your  \"pionts\"\n\n";
        }
            else cout << "I am sorry but you can't Enter because of your  \"age\"\n";
        }
        else cout << "Your \"age\" is wrong \n";
        
    return 0;
}