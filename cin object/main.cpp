#include <iostream>
//This program illustates what can happen when a
//floating-point number is entered for an integer variable.
using namespace std;

int main()
{
    int intnumber;
    double floatnumber;

    cout << "Input a number." << endl;
    cin >> intnumber;
    cout << "Input a second number.\n";
    cin >> floatnumber;
    cout >> "You entered: " << intnumber <<" and " << floatnumber << endl;
    return 0;
}
