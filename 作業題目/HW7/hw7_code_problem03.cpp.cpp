#include <iostream>
#include <string>

using namespace std;

class Pstring:public string
{
private:
    string str;
public:
    Pstring(string s)
    {str=s;}
    bool isPalindrome()
    {
        string s2;
        int SIZE = str.length();
        for(int i=0;i<SIZE;i++)
            s2[i]=str[SIZE-1-i];
        for(int i=0;i<SIZE;i++)
        {
            if(str[i]!=s2[i])
                return false;
            else
                 return true;
        }
    }

};
int main()
{
    string s;
    cout << "Enter a string.(with no space)\n";
    cin >> s;
    Pstring str(s);
    if(str.isPalindrome())
        cout << "It is palindrome.\n";
    else
        cout << "It is not palindrome.\n";
    return 0;
}
