#include <iostream>

using namespace std;

int main()
{
    int number, baseball, spent;

    cout << "Last year, what is the number of baseball we bought? ";
    cin >> number;

    cout << "How much each of the baseball is?";
    cin >> baseball;

    spent = number * baseball;
    cout << "Totally,we spent " << spent << " dollars to purchase new baseballs last year! ";

    return 0;
}
