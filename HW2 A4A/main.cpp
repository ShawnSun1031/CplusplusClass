// This program displays the sum of two numbers.
#include <iostream>
using namespace std;
int main()
{
    int choice, num1, num2;
    do
    {
        cout<< "Enter a number: ";
        cin>> num1;
        cout<< "Enter another number: ";
        cin>> num2;
        cout<< "Their sum is " << (num1 + num2) <<endl;
        cout<< "Do you want to do this again?\n";
        cout<< "1 = yes, 0 = no\n";
        cin>> choice;
    } while (choice == 1);
    return 0;
}
