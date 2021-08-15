#include <iostream>

using namespace std;

int main()
{
    int maxi, mini, number;
    cout << "You can enter a number of series and we will diplay ";
    cout << "the largest and the smallest number of the series.\n";
    cout << "99 is the sinal that the series will be ended.\n";
    cout << "You enter a number: ";
    cin >> number;
    if(number!=99)
    {
         for(maxi=mini=number;number!=99;)
         {
             cout << "You enter a number: ";
             cin >> number;
             if(number!=99)
             {
                 if(maxi<number)
                 {
                     maxi = number;
                 }
                 else if(mini>number)
                 {
                     mini = number;
                 }
             }
         }
         cout << "End of series.\n";
         cout << "The largest number of you entered is "<< maxi << " .\n";
         cout << "The smallest number of you entered is "<< mini < " .\n";
    }
    else
    {
        cout << "End of series.\n";
    }
    return 0;
}
