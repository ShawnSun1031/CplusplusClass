#include <iostream>
#include <cctype>
using namespace std;
int cal(char* );

int main()
{
    char s[100];
    cout << "Enter a sentence.\n";
    cin.getline(s,100);
    cout << "You enter " << cal(s) << " words\n";
    return 0;
}

int cal(char* s)
{
    int word=0;
    for(int i=0;*s!='\0';s++)
    {
        if(isspace(s[i]))
            word++;
    }
    return word+1;

}
