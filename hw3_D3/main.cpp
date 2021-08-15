#include <iostream>
#include <cstdlib>
using namespace std;
double profit(int&,double&,double&,double&,double&);

int main()
{
    int NM,NS,num,pre;
    double SP, SC, PP, PC, total;
    cout << "What is the number of stock sales?";
    cin >> NM;
    for(num=1;num<=NM;num++)
    {
        cout << "\nNumber " << num << "  stock sales is be caculated.\n";
        pre = profit(NS,SP,SC,PP,PC);
        total += pre;

    }
    if (total>=0)
    {
        cout << "\nThe total sale of  stocks you get profit!\n";
        cout << "The total profit is: " << total << "$.\n";
    }
    else if (total<0)
    {
        cout << "\nThe total sale of  stocks you get loss!\n";
        total = total*(-1);
        cout << "The total loss is: " << total << "$.\n";
    }
    return 0;
}
double profit(int& NS, double& SP, double& SC, double& PP, double& PC)
{

    cout << "What is the number of shares?";
    cin >> NS;
    cout << "\nWhat is the sale price per share?";
    cin >> SP;
    cout << "\nWhat is the sale commission paid?";
    cin >> SC;
    cout << "\nWhat is the purchase price per share?";
    cin >> PP;
    cout << "\nWhat is the purchase commission paid?";
    cin >> PC;
    return ((NS*SP) - SC) - ((NS*PP) + PC);
}
