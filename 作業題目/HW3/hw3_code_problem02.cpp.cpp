#include <iostream>

using namespace std;
double profit(int&,double&,int&,double&,int&);

int main()
{
    int NS, SC, PC;
    double SP, PP,total;
    total = profit(NS,SP,SC,PP,PC);
    cout << "The number of shares is " << NS;
    cout << "\nThe sale price per share is " << SP << " $.";
    cout << "\nThe sale commision paid is " << SC << " $.";
    cout << "\nThe purchase price per share is " << PP << " $.";
    cout << "\nThe purchase commission paid is " << PC << " $.\n";
    if (total>=0)
    {
        cout << "The sale of a stock you get profit!\n";
        cout << "The profit is: " << total << "$.\n";
    }
    else if (total<0)
    {
        cout << "The sale of a stock you get loss!\n";
        total = total*(-1);
        cout << "The loss is: " << total << "$.\n";
    }


    return 0;
}
double profit(int& NS, double& SP, int& SC, double& PP, int& PC)
{
    cout << "What is the number of shares?";
    cin >> NS;
    cout << "\nWhat is the sale price per share?";
    cin >> SP;
    cout << "\nWhat is the sale commission paid?";
    cin >> SC;
    cout << "\nWhat is the purchase price per share?";
    cin >> PP;
    cout << "\nWhat is the purchase commission paid?\n";
    cin >> PC;
    return ((NS*SP) - SC) - ((NS*PP) + PC);
}
