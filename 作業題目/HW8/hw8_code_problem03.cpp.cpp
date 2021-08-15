#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
void cal(char* );
int main()
{
    char s[100];
    cout << "Enter a sentence.\n";
    cin.getline(s,100);
    cout << "You enter: \n";
    cout << s << "\n";
    cout << "Become:\n";
    cal(s);
    cout << s;
    return 0;
}

void cal(char* s)
{
    s[0]=toupper(s[0]);
    for(;*s!='\0';s++)
    {
        if(*s=='.')
            *(s+2)=toupper(*(s+2));
    }
}
