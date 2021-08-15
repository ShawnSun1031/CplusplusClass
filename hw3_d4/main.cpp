#include <iostream>
#include <cstdlib>
using namespace std;
void getJudgeData(double& a, double& b,double& c, double& d,double& e);
double calcScore(double& a, double& b,double& c, double& d,double& e);
int findLowest(double& a, double& b,double& c, double& d,double& e);
int findHighest(double& a, double& b,double& c, double& d,double& e);
int main()
{
    double a,b,c,d,e,avg;
    getJudgeData(a,b,c,d,e);
    avg = calcScore(a,b,c,d,e);
    cout << "\nThe average score expcept the highest and lowest is " << avg << endl;
    return 0;
}
void getJudgeData(double& a, double& b,double& c, double& d,double& e)
{
    cout << "please get five point between 0 and 10 to the talent show!\n";
    cin >> a;
    if(a>=0 && a<=10)
    {
        cout << "The first judge is " << a << " point!\n";
    }
    else if(a<0 || a>10)
    {
        cout << "Oops!you enter a invalid point.\n";
        cout << "please try again!\n";
        exit(0);
    }
    cin >> b;
    if(b>=0 && b<=10)
    {
        cout << "The second judge is " << b << " point!\n";
    }
    else if(b<0 || b>10)
    {
        cout << "Oops!you enter a invalid point.\n";
        cout << "please try again!\n";
        exit(0);
    }
    cin >> c;
    if(c>=0 && c<=10)
    {
        cout << "The third judge is " << c << " point!\n";
    }
    else if(c<0 || c>10)
    {
        cout << "Oops!you enter a invalid point.\n";
        cout << "please try again!\n";
        exit(0);
    }
    cin >> d;
    if(d>=0 && d<=10)
    {
        cout << "The forth judge is " << d << " point!\n";
    }
    else if(d<0 || d>10)
    {
        cout << "Oops!you enter a invalid point.\n";
        cout << "please try again!\n";
        exit(0);
    }
    cin >> e;
    if(e>=0 && e<=10)
    {
        cout << "The fifth judge is " << e << " point!\n";
    }
    else if(e<0 || e>10)
    {
        cout << "Oops!you enter a invalid point.\n";
        cout << "please try again!\n";
        exit(0);
    }
}
double calcScore(double& a, double& b,double& c, double& d,double& e)
{
    double maxi,mini,avg;
    maxi = findHighest(a,b,c,d,e);
    mini = findLowest(a,b,c,d,e);
    avg = (a+b+c+d+e-maxi-mini)/3;
    return avg;
}
int findHighest(double& a, double& b,double& c, double& d,double& e)
{
    double maxi;
    maxi = a;
    if((maxi-b)<0)
    {
        maxi = b;
    }
    if((maxi-c)<0)
    {
        maxi = c;
    }
    if((maxi-d)<0)
    {
        maxi = d;
    }
    if((maxi-e)<0)
    {
        maxi = e;
    }
    return maxi;
}
int findLowest(double& a, double& b,double& c, double& d,double& e)
{
    double mini;
    mini = a;
    if(mini-b>=0)
    {
        mini = b;
    }
    if(mini-c>=0)
    {
        mini = c;
    }
    if(mini-d>=0)
    {
        mini = d;
    }
    if(mini-e>=0)
    {
        mini = e;
    }
    return mini;
}




