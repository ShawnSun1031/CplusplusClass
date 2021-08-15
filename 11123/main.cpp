#include <iostream>

using namespace std;

class DayOfYear {
    public:
           void input();
           void output();
    private:
            int month;
            int day;   // other private members
};
int main()
{
    DayOfYear hi;
    hi.output();

    cout << "Hello world!" << endl;
    cout << hi.output();
    return 0;
}
void DayOfYear::output()
{
    cout << "HIHIHIHIHIHIHI"
}
