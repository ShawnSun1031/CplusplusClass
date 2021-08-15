#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string stars;
    int numStars;

    numStars = 1 ;
    stars.assign(numStars, '*');
    cout << setw(4) << stars << setw(3)<< endl;

    numStars += 2;
    stars.assign(numStars, '*');
    cout << setw(5)<< stars << endl;

    numStars += 2;
    stars.assign(numStars, '*');
    cout << setw(6) << stars << endl;

    numStars += 2;
    stars.assign(numStars, '*');
    cout << stars << endl;

    numStars -= 2;
    stars.assign(numStars, '*');
    cout << setw(6) << stars << endl;

    numStars -= 2;
    stars.assign(numStars, '*');
    cout << setw(5) << stars << endl;

    numStars -= 2;
    stars.assign(numStars, '*');
    cout << setw(4) << stars << endl;


    return 0;
}
