#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int determine_number(string s);
int number_trans(string s);

int main()
{
    string s;
    int number;

    do
    {
        cout << "Please enter a integer number between 0 and 100.\n";
        cin >> s;

    }while(!determine_number(s));

    number = number_trans(s);
    while(number<0 || number>100)
    {
        cout << "You enter the invalid value.\n";
        cout << "Try again,thanks.\n";
        cout << "Please enter a integer number between 0 and 100.\n";
        cin >> s;
        number = number_trans(s);
    }
    cout << "\nThe number you enter: " << number <<endl;


    return 0;
}
int determine_number(string s)
{
    int i,w;
    for(i=0; i<s.size(); i++)
    {
        w = s[i];
        if(w<48 || w>57)
        {
            cout << "You enter the invalid value.\n";
            cout << "Try again,thanks.\n\n";
            return false;
        }
        w = 0;
    }
    return true;
}
int number_trans(string s)
{
    double ch, sum=0,num;
    double i,w,r;
    for(i=0; i<s.size(); i++)
    {
        r = s.size();
        w = s[i];
        num = (w - 48)*pow(10,r-i-1);
        sum += num;
    }

    return sum;
}


