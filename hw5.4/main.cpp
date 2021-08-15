#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const int SIZE = 30;

class Stats
{
private:
    string city,time,startMonth,endMonth,LowMonth,HighMonth;
    double rainfall[SIZE];
    int Count,endindex;
    int start_year,start_month;
    int end_year,end_month;
    int Low_year,Low_month,lowTime;
    int High_year,High_month,highTime;
public:
    Stats(string c="xxxx",string t="yyyymm")
    {
        city=c;
        time=t;
    }
    void getString(string,string);
    void getRain(double[],int,int);
    void getStartTime(string);
    void getEndTime();
    double gettotal();
    double getaverage();
    double getlowest();
    void getLowTime();
    double gethighest();
    void getHighTime();
    bool storeValue(double[],int);
    void diplayReport();
};

void Stats::getString(string c,string t)
{
    city = c;
    time = t;
}
void Stats::getRain(double rain[],int ttt,int tt)
{
    for(int i=0;i<ttt;i++)
        rainfall[i] = rain[i];
    Count = ttt;
    endindex = tt;
}
void Stats::getStartTime(string s)
{
    start_year = 0;
    start_month = 0;
    for(int i=0;i<4;i++)
        start_year += (static_cast<int>(s[i])-48)*pow(10,3-i);
    for(int j=0;j<2;j++)
        start_month += (static_cast<int>(s[j+4])-48)*pow(10,1-j);
    switch(start_month)
    {
    case 1:
        startMonth = "January";
        break;
    case 2:
        startMonth = "February";
        break;
    case 3:
        startMonth = "March";
        break;
    case 4:
        startMonth = "April";
        break;
    case 5:
        startMonth = "May";
        break;
    case 6:
        startMonth = "June";
        break;
    case 7:
        startMonth = "July";
        break;
    case 8:
        startMonth = "August";
        break;
    case 9:
        startMonth = "September";
        break;
    case 10:
        startMonth = "October";
        break;
    case 11:
        startMonth = "November";
        break;
    case 12:
        startMonth = "December";
        break;

    }

}
void Stats::getEndTime()
{
    end_month = 0;
    end_year = 0;
    if (endindex==SIZE)
        endindex--;
    if (endindex>12)
    {
        end_month = 12-endindex%12 + start_month;
        end_year = start_year + endindex/12;
    }
    else
    {
        end_month = start_month + endindex;
        end_year = start_year;
    }
    switch(end_month)
    {
    case 1:
        endMonth = "January";
        break;
    case 2:
        endMonth = "February";
        break;
    case 3:
        endMonth = "March";
        break;
    case 4:
        endMonth = "April";
        break;
    case 5:
        endMonth = "May";
        break;
    case 6:
        endMonth = "June";
        break;
    case 7:
        endMonth = "July";
        break;
    case 8:
        endMonth = "August";
        break;
    case 9:
        endMonth = "September";
        break;
    case 10:
        endMonth = "October";
        break;
    case 11:
        endMonth = "November";
        break;
    case 12:
        endMonth = "December";
        break;

    }

}

bool Stats::storeValue(double rain[],int t)
{
    for (int i=0;i<=t;i++)
    {
        if(rain[i]<0)
            return false;
    }
    return true;
}

double Stats::gettotal()
{
    double total=0;
    if(storeValue(rainfall,Count))
    {
        for(int i=0;i<Count;i++)
        {
            total += rainfall[i];
        }
    }
    return total;
}
double Stats::getaverage()
{
    return gettotal()/Count;
}
double Stats::gethighest()
{
    double hi,t;
    hi = rainfall[0];
    for(int i=0;i<Count;i++)
    {
        if(hi<=rainfall[i])
        {
            hi = rainfall[i];
            highTime = i;
        }
    }
    High_month = 0;
    High_year = 0;
    High_month = start_month + highTime;
    High_year = start_year;
    switch(High_month)
    {
    case 1:
        HighMonth = "January";
        break;
    case 2:
        HighMonth = "February";
        break;
    case 3:
        HighMonth = "March";
        break;
    case 4:
        HighMonth = "April";
        break;
    case 5:
        HighMonth = "May";
        break;
    case 6:
        HighMonth = "June";
        break;
    case 7:
        HighMonth = "July";
        break;
    case 8:
        HighMonth = "August";
        break;
    case 9:
        HighMonth = "September";
        break;
    case 10:
        HighMonth = "October";
        break;
    case 11:
        HighMonth = "November";
        break;
    case 12:
        HighMonth = "December";
        break;

    }
    return hi;
}

double Stats::getlowest()
{
    double low;
    low = rainfall[0];
    for(int i=0;i<Count;i++)
    {
        if(low>=rainfall[i])
            low = rainfall[i];
            lowTime = i;
    }
    Low_month = 0;
    Low_year = 0;
    if (lowTime>12)
    {
        Low_month = 12-lowTime%12 + start_month;
        Low_year = lowTime/12 + start_year;
    }
    else
    {
       Low_month = start_month + lowTime;
    Low_year = start_year;
    }

    switch(Low_month)
    {
    case 1:
        LowMonth = "January";
        break;
    case 2:
        LowMonth = "February";
        break;
    case 3:
        LowMonth = "March";
        break;
    case 4:
        LowMonth = "April";
        break;
    case 5:
        LowMonth = "May";
        break;
    case 6:
        LowMonth = "June";
        break;
    case 7:
        LowMonth = "July";
        break;
    case 8:
        LowMonth = "August";
        break;
    case 9:
        LowMonth = "September";
        break;
    case 10:
        LowMonth = "October";
        break;
    case 11:
        LowMonth = "November";
        break;
    case 12:
        LowMonth = "December";
        break;

    }
    return low;
}
void Stats::diplayReport()
{
    getEndTime();
    cout << fixed << setprecision(2) << endl;
    cout << startMonth << " " << start_year << "-" << endMonth << " " << end_year << " Rain Report for " << city << " country.\n";
    cout << "Total rainfall in this period: " << gettotal() << " inches." << endl;
    cout << "Average monthly rainfall: " << getaverage() << " inches." << endl;
    cout << "The least rain fell in " << LowMonth << ", " << Low_year << " with " << getlowest() << " inches." << endl;
    cout << "The most rain fell in " << HighMonth << ", " << High_year << " with " << gethighest() << " inches." << endl;
}
int main()
{
    Stats raindata;
    string city,time;
    double rain[SIZE];
    int Count=0,endindex=0;
    cout << "Enter the city name.";
    cin >> city;
    cout << "Enter the starting time by YYYYMM.(e.g.201901,199810,etc.)";
    cin >> time;
    raindata.getString(city,time);
    raindata.getStartTime(time);
    cout << "Enter a consecutive data for the monthly rain fall.(the max consecutive range is 30)\n";
    cout << "Enter -1 to end the series and will show you the report!\n";
    for (int i=0;i<SIZE;i++)
    {
        cout << "The month#" << i+1 << ": ";
        cin >> rain[i];
        while(!raindata.storeValue(rain,Count) && rain[i]!=-1)
        {
            cout << "Please enter valid number(positive or zero)\n";
            cout << "The month#" << i+1 << ": ";
            cin >> rain[i];
        }
        if(rain[i]==-1)
        {
            endindex--;
            cout << "The series end!Show you the rain report below!\n\n";
            break;
        }

        endindex++;
        Count++;

    }
    raindata.getRain(rain,Count,endindex);
    raindata.diplayReport();


    return 0;
}
