#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double dollars = 5;
    cout<< fixed << showpoint << setprecision(4)
		<< dollars << endl;

    return 0;
}
