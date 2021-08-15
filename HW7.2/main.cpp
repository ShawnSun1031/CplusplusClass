#include <iostream>

using namespace std;

class DayOfYear
{
private:
    int day;
    static int MonthDays[12];
    static string month_day[12];
public:
    DayOfYear(int d)
    {day=d;}
    void print()
    {
        int m=0;
        while(MonthDays[m]<day)
            m=m+1;
        if (m>=1)
        cout << "Day " << day << " would be " << month_day[m] << " " << day-MonthDays[m-1] << "\n";
        else
        cout << "Day " << day << " would be " << month_day[m] << " " << day << "\n";
    }


};
int DayOfYear::MonthDays[12] = {31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};
string DayOfYear::month_day[12]={"January","February","March","April","May","June",
                            "July","August", "September","October","November","December"};
int main()
{
    int day;
    do
    {
        cout << "A year has 365 days,enter a day it will translate to month and day.(enter 0 to close)";
        cin >> day;
        while(day<0 || day>365)
        {
            cout << "Please enter a valid day between 1 and 365 ";
            cin >> day;
        }
        if(day!=0)
        {
            DayOfYear DoY(day);
            DoY.print();
        }


    }while(day!=0);
    cout << "\nClose the translation! Bye Bye!\n";

    return 0;
}
