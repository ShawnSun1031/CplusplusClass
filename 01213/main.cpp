#include <iostream>

using namespace std;



class DayOfYear

{

public:

  void input();

  void output();

// other public members

private:

  int month;

  int day;

  // other private members

};

int main()

{

  DayOfYear birthDay;

  birthDay.input();          // A)

           // B)

     // C)

  // D)

  if(birthDay.month == 1)    // E)

    cout << "January\n";

}
void DayOfYear::input()
{
    cout << "INPUT";
}
void DayOfYear::output()
{
    cout << "OUT";
}
