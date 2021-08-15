#include <iostream>
#include <string>
using namespace std;

int main()
{
    string add;
    int line, number=1, middle = 13;
    for(line=1;line<=7;line=line+1)
    {
        if(line<4 )
        {
            add.assign(number,'+');
            number = number + 2;
            cout << add << endl;
        }
        else if(line==4)
        {
            add.assign(middle,'+');
            middle = 13;
            cout << add << endl;
        }
        else
        {
            number = number - 2;
            add.assign(number,'+');
            cout << add << endl;
        }

    }

}
