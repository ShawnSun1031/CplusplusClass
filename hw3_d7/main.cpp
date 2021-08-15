#include <iostream>
#include <string>
using namespace std;
string upperCaseIt(string s);
bool samestring(string s1, string s2);

int main()
{   string s1, s2;
    cout << "Write a name: ";
    cin  >> s1;
    cout << "Write another name: ";
    cin  >> s2;
    if (samestring(s1, s2))
    { cout << "They are the same!!!" << endl;
    }
    else
    {cout << "They are not the same!!!" << endl;
    }
	return 0;
}
string upperCaseIt(string s)
{
    for (int x = 0; x <= s.length(); x++)
    {
        s[x] = toupper(s[x]);
    }
    return s;
}
bool samestring(string s1, string s2)
{
    if (upperCaseIt(s1) == upperCaseIt(s2))
    {
        return true;
    }
    else
    {
        return false;
    }
}

