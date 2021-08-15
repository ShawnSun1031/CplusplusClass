#include <iostream>

using namespace std;

int main()
{
    int score;
    cin >> score;
    if(score >= 90 && score <=100)
        cout << "Excellent" << endl;
    else if(score >= 80 && score < 90)
        cout << "Good" << endl;
    else if(score >= 0 && score < 80)
        cout << "Try Harder" << endl;
    else if(score < 0 || score >100)
        cout << "You enter a invalid score!Try again." << endl;


    return 0;
}
