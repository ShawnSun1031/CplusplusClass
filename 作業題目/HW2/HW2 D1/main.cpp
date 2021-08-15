#include <iostream>

using namespace std;

int main()
{
    double second, day, hour, minute;
    cout << "It is a time caculator.\n";
    cout << "Please enter a number of seconds,";
    cout << "and it will be transform to day,hour,minute,logically.\n";
    cin >> second;
    if (second >= 86400)
    {
        day = second / 86400;
        cout << second << " seconds you entered.\n";
        cout << second << " seconds eqaul to " << day << " days.\n";
    }

    else if (second >= 3600 && second < 86400)
    {
        hour = second / 3600;
        cout << second << " seconds you entered.\n";
        cout << second << " seconds eqaul to " << hour << " hours.\n";
    }
    else if (second >= 60 && second < 3600)
    {
        minute = second / 60;
        cout << second << " seconds you entered.\n";
        cout << second << " seconds eqaul to " << minute << " minutes.\n";
    }
    else
        cout << second << " seconds you entered.";
    return 0;

}
