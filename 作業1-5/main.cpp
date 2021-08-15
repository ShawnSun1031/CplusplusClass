#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int Number_of_Payments;
    double Loan_Amount, Monthly_Interest_Rate, Monthly_payment, Amount_paid_Back, Interest_Paid;

    cout << "What is your loan amount? ";
    cin >> Loan_Amount;

    cout << "What is the monthly payment rate? ";
    cin >> Monthly_Interest_Rate;

    cout << "What is the number of payments? ";
    cin >> Number_of_Payments;

    Monthly_payment = (Monthly_Interest_Rate * pow(( 1 + Monthly_Interest_Rate), Number_of_Payments)) / ((pow((1 + Monthly_Interest_Rate),Number_of_Payments))-1) * Loan_Amount;
    Amount_paid_Back = Monthly_payment * Number_of_Payments;
    Interest_Paid = Monthly_payment * Number_of_Payments - Loan_Amount ;
    cout << "So, we know that\n";
    cout << "Loan Amount: $" << fixed << setprecision(2) << Loan_Amount << endl;
    cout << "Monthly Interest Rate: " << Monthly_Interest_Rate << endl;
    cout << "Number of Payments: " << setprecision(2) << Number_of_Payments << endl;
    cout << "Monthly Payment: $ " << fixed << setprecision(2) << Monthly_payment << endl;
    cout << "Amount Paid Back: $ " << fixed << setprecision(2) << Amount_paid_Back << endl;
    cout << "Interest Paid: $ " << fixed << setprecision(2) << Interest_Paid << endl;

    return 0;
}
