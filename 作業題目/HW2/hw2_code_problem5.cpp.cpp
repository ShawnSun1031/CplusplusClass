#include <iostream>

using namespace std;

int main()
{
    int remainder, c, number;
    cout << "Enter a positive integer number.\n";
    cout << "We will determine whether it is prime or not.\n";
    cout << "You enter a number: ";
    cin >> number;
    if(number>3)
    {
        for(c=2;c<=number/2;c=c+1)
        {
            remainder = number % c;
            if(remainder==0)
                break;
        }
        if(remainder==0)
        {
            cout << "The number " << number << " is not prime.\n";
        }
        else if(remainder!=0)
        {
            cout << "The number " << number << " is prime.\n";
        }
    }
    else if(number<=3 && number>0)
    {
        if(number==2 || number==3)
        {
            cout << "The number " << number << " is prime.\n";
        }
        else if(number==1)
        {
            cout << "The number " << number << " is not prime.\n";
        }
    }
    else if(number<=0)
    {
        cout << "Please enter a positive integer number.\n";
    }
    return 0;
}
