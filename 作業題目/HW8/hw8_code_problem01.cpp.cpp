#include <iostream>

using namespace std;
int cal(char* );

int main()
{
    char s[40];
    cout << "Enter a string.\n";
    cin.getline(s,40);
    cout << "You enter " << cal(s) << " characters.\n";
    return 0;
}

int cal(char* s)
{
    int count=0;
    for(;*s!='\0';s++)
    {

        count++;
    }

    return count;
}
