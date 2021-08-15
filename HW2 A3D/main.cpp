#include <iostream>

using namespace std;

int main()
{
    int testScore;
    cout<< "Enter your test score and I will tell you\n";
    cout<< "the letter grade you earned: ";
    cin>>testScore;
    if (testScore< 60.0)
    {
        testScore = 'F';
    }
    else if (testScore < 70.0)
    {
        testScore = 'D';
    }
     else if (testScore < 80.0)
    {
        testScore = 'C';
    }
     else if (testScore < 90.0)
    {
        testScore = 'B';
    }
     else if (testScore <= 100.0)
    {
        testScore = 'A';
    }
    switch (testScore)
    {
       case 'F':cout<< "Your grade is F.\n";
                break;
       case 'D':cout<< "Your grade is D.\n";
                break;
       case 'C':cout<< "Your grade is C.\n";
                break;
       case 'B':cout<< "Your grade is B.\n";
                break;
       case 'A':cout<< "Your grade is A.\n";
                break;
       default: cout<< "That score isn't valid\n";
    }

}
