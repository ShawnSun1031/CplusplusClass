#include <iostream>
#include <iomanip>
using namespace std;
double celsius(double F);
int main()
{
    double C,F;
    cout << setw(10) << "Celsius" << "  || " <<setw(12) << "Fahrenheit\n";
    for (F=0;F<=20;F++)
    {

        C = celsius(F);
        cout << fixed << setprecision(2) << setw(10) << C << "  || " <<setw(8) << F <<endl;
    }
    return 0;
}
double celsius(double F)
{
    return 5*(F-32)/9;
}
