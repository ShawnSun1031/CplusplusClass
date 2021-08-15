#include <iostream>

using namespace std;

int main()
{
    string Roman[20]={"I","II","III","IV","V","VI","VII","VIII","IX","X",
                      "XI","XII","XIII","XIV","XV","XVI","XVII","XVIII","XIX","XX"};
    int number;
    cout << "Enter a number between 1-20 and it will continue convert to Roman numeral.(input 0 to close the converter)\n";
    do
    {
        cin >> number;
        if(number>0 && number<=20)
            cout <<  number << " equal " << Roman[number-1] << "\n\n";
        else if(number<0 || number>20)
            cout << "Please enter a valid number.(1-20)\n\n";

    }while(number!=0);
    if (number==0)
        cout << "You enter 0, so the converter close.Bye bye.\n";

}
