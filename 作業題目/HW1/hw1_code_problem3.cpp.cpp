#include <iostream>

using namespace std;

int main()
{
    int number_share;
    double per_share, total_paid, total_received, total_lost;
    per_share = 21.77;
    number_share = 600;
    total_paid = per_share * number_share;
    cout << "The total amount paid for the stock is " << total_paid << endl;

    per_share = 16.44;
    number_share = 600;
    total_received = per_share * number_share;
    cout << "The total amount received from selling the stock is " << total_received << endl;

    total_lost = total_received - total_paid;
    cout << "The total amount of money she lost is " << total_lost << endl;

    return 0;
}
