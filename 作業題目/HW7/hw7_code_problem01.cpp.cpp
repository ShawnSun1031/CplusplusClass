#include <iostream>

using namespace std;

class Numbers
{
private:
    int number;
    static string lessthan20[20];
    static string greaterthan20[8];
    static string lessthan10[10];
    static string greaterthan10[9];
    static string hundred;
    static string thousand;
public:
    Numbers(int n)
    {
        while(n<0 || n>9999)
        {
            cout << "Please enter the amount in the range 0 between 9999.\n";
            cin >> n;
        }
        number=n;
    }
    void print()
    {
        string s,zero=" zero ";
        if(number>=0 && number<20)
        {
            s = lessthan20[number];
            cout << s;
        }
        else if(number>=20 && number<100)
        {
            if(lessthan20[number%10]==zero)
                s = greaterthan20[number/10-2];
            else
                s = greaterthan20[number/10-2]+lessthan20[number%10];

            cout << s;
        }
        else if(number>=100 && number<1000)
        {
            if(number%100>=20)
            {
                if(lessthan20[number%20]==zero)
                    s = lessthan20[number/100]+hundred+greaterthan20[(number%100)/10-2];
                else
                    s = lessthan20[number/100]+hundred+greaterthan20[(number%100)/10-2]+lessthan10[number%10];
            }
            else
            {
                if(lessthan20[number%20]==zero)
                    s = lessthan20[number/100]+hundred;
                else
                    s = lessthan20[number/100]+hundred+lessthan20[number%20];
            }
            cout << s;
        }
        else if(number>=1000 && number<10000)
        {
            if(lessthan20[(number%1000)]==zero)
                s = lessthan20[number/1000]+thousand;
            else
            {
                if(number%100>=20)
                {
                    if(lessthan20[number%20]==zero)
                        s = lessthan20[number/1000]+thousand+lessthan20[(number%1000)/100]+hundred+greaterthan20[(number%100)/10-2];
                    else
                        s = lessthan20[number/1000]+thousand+lessthan20[(number%1000)/100]+hundred+greaterthan20[(number%100)/10-2]+lessthan10[number%10];
                }
                else
                {
                    if(lessthan20[number%20]==zero)
                        s = lessthan20[number/1000]+thousand+lessthan20[(number%1000)/100]+hundred;
                    else
                        s = lessthan20[number/1000]+thousand+lessthan20[(number%1000)/100]+hundred+lessthan20[number%20];
                }
            }
            cout << s;
        }
    }

};
string Numbers::lessthan20[20]={" zero "," one "," two "," three "," four "," five "," six "," seven "," eight "," nine "," ten ",
                                " eleven "," twelve "," thirteen "," fourteen "," fifteen "," sixteen "," seventeen "," eighteen "," nineteen "};
string Numbers::greaterthan20[8]={" twenty "," thirty "," forty "," fifty "," sixty "," seventy "," eighty "," ninety "};
string Numbers::lessthan10[10]={" zero "," one "," two "," three "," four "," five "," six "," seven "," eight "," nine "};
string Numbers::greaterthan10[9]={" ten "," twenty "," thirty "," forty "," fifty "," sixty "," seventy "," eighty "," ninety "};
string Numbers::hundred = " hundred ";
string Numbers::thousand = " thousand ";
int main()
{
    int dollar;
    cout << "Enter the whole dollar amount.(the enter range is 0 between 9999)\n";
    cin >> dollar;
    Numbers num(dollar);
    num.print();

    return 0;
}
