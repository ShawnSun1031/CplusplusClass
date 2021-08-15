#include <iostream>
// This program has variable of several of the integer types.
using namespace std;

int main()
{
    int checking;
    unsigned int miles;
    long days;

    checking = -20;
    miles = 46789;
    days = 190000;

    cout << "We have made a long journey of " << miles << " miles.";
    cout << "\nOur checking account balance is " << checking;
    cout << "\nAbout " << days << " days ago columbus ";
    cout << "stood on this spot.\n";
    return 0;
}
