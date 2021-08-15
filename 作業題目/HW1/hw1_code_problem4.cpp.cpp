#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double Interest_Rate, Times_Compounded, Principal, Interest, Final_balance, Amount;
    cout << "What is the interest rate of your account? ";
    cin >> Interest_Rate;

    cout << "What is the times compounded you have? ";
    cin >> Times_Compounded;

    cout << "What is the principal you have? " ;
    cin >> Principal;

    Amount = Principal * pow(( 1 + Interest_Rate / Times_Compounded), Times_Compounded );
    Interest = Amount - Principal;
    Final_balance = Amount;

    cout << "So, now we know that\n";
    cout << "Interest Rate: " << Interest_Rate << endl;
    cout << "Times Compound: " << Times_Compounded << endl;
    cout << "Principal: $" << fixed << setprecision(2) << Principal << endl;
    cout << "Interest: $" << fixed << setprecision(2) << Interest << endl;
    cout << "Final balance: $" << fixed << setprecision(2) << Final_balance << endl;

    return 0;
}
