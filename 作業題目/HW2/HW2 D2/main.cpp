#include <iostream>

using namespace std;

int main()
{
    int check;
    double fee;
    const int charge = 10;
    cout << "please enter the number of checks written during the last months?\n";
    cout << "And we will compute and display the bank's fees for the month.\n";
    cin >> check;
    if (check < 20 && check >= 0)
    {
        fee = 0.1*check + charge;
        cout << "The bank's fees for the month is " << fee << "$.\n";
    }
    else if (check >=20 && check <= 39)
    {
        fee = 0.08*check + charge;
        cout << "The bank's fees for the month is " << fee << "$.\n";
    }
    else if (check >=40 && check <= 59)
    {
        fee = 0.06*check + charge;
        cout << "The bank's fees for the month is " << fee << "$.\n";
    }
    else if (check >= 60)
    {
        fee = 0.04*check + charge;
        cout << "The bank's fees for the month is " << fee << "$.\n";
    }
    else
    {
        cout << "You enter a negative check.\n";
        cout << "It is a invalid number please entered again.\n";

    }
    return 0;

}
