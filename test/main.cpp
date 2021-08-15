#include <iostream>

using namespace std;




struct GradeList
{
    string courseNum;
    int a=5;
    int *grades=&a;
};



int main()
{
    int *s;
    GradeList test1, *testPtr = &test1;
    cout << test1.grades<< endl;

    return 0;
}

