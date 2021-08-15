#include <iostream>

using namespace std;
double cal(int& P,double& B,double& D,int& Y,int& movein,int& leave,int& N);
int main()
{
    int N,P,Y,year,movein,leave;
    double B,D;
    do
    {
        cout << "What is the starting size of population?";
        cin >> P;
        if (P<2)
        {
            cout << "\nYou enter a invalid value.\n";
            cout << "The starting size of population should be at least 2.\n";
            cout << "Try again.\n\n";
        }
    }while(P<2);

    do
    {
        cout << "\nWhat is the annual birth rate?\n";
        cin >> B;
        if (B>1 || B<0)
        {
           cout << "\nYou enter a invalid value.\n";
           cout << "The annual birth rate should be between 0 and 1.\n";
           cout << "Try again.\n\n";
        }

    }while(B>1 || B<0);

    do
    {
        cout << "\nWhat is the annual death rate?\n";
        cin >> D;
        if (D>1 || D<0)
        {
            cout << "\nYou enter a invalid value.\n";
            cout << "The annual death rate should be between 0 and 1.\n";
            cout << "Try again.\n\n";
        }
    }while (D>1 || D<0);

    do
    {
        cout << "\nWhat is the number of individuals that typically move into the area each year?\n";
        cin >> movein;
        if (movein<0)
        {
            cout << "You enter a invalid value. The population should be higher or equal to zero.\n";
            cout << "Try again.\n";
        }
    }while (movein<0);

    do
    {
        cout << "\nWhat is the number of individuals that typically leave the area each year\n";
        cin >> leave;
        if (leave<0)
        {
            cout << "You enter a invalid value. The population should be higher or equal to zero.\n";
            cout << "Try again.\n";
        }
    }while (leave<0);

    do
    {
        cout << "\nWhat is the number of years you want to display?\n";
        cin >> Y;
        if (Y<1)
        {
            cout << "\nYou enter a invalid value.\n";
            cout << "The years minimum should be at least 1.\n";
            cout << "Try again.\n\n";
        }
    }while(Y<1);

    for (year=1;year<=Y;year++)
    {
        N = cal(P,B,D,Y,movein,leave,N);
        cout << "After " << year << " year(s), the population is " << N << " .\n";
        P = N;
    }
    return 0;
}
double cal(int& P,double& B,double& D,int& Y,int& movein,int& leave,int& N)
{
    N = P*(1 + B)*(1 - D)+movein-leave;
    return N;
}
