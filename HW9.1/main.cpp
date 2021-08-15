#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
using namespace std;

int main()
{
    fstream infile,outfile;
    string s1="apple\nbanana,apple,apple,banana\nants";
    outfile.open("fruit.txt",ios::out);
    outfile<<s1;
    outfile.close();

    char name[100];
    char input[100];
    char s2[10];
    char *found;
    char copyc[200];
    int count=0,temp=0;
    cout << "Enter a file name you want to use.(hint:enter fruit.txt)\n";
    cin >> name;
    infile.open(name,ios::in);

    infile >> input;

    if(!infile.fail())
    {
        cout << "\nSuccessful to open the file.\n";
    }
    else
    {
        cout << "Incorrect file name, fail to open it.\n";
    }

    cout << "\n\nEnter a string you want to search.\n";
    cout << "And it will display all lines that contain the string.\n";
    cin >> s2;
    cout << "\n\nall lines that contain the string is below: \n";
    while (!infile.fail())
    {
        if(strstr(input,s2))
        {
            cout << input << "\n";
            for (int i=0;i<strlen(input)-strlen(s2)+1;i++)
            {
                if(input[i]==*s2)
                {
                    for (int j=0;j<strlen(s2);j++)
                    {
                        if(input[i+j]==*(s2+j))
                        {
                            temp++;
                            if(temp==strlen(s2))
                            {
                                count++;
                                temp=0;
                            }
                        }
                    }
                }
                temp=0;
            }
        }
        infile >> input;
    }
    infile.close();
    if(count!=0)
        cout << "\nFound the " << s2 << " in the file " << count << " times.\n";
    else
        cout << "Did not find the " << s2 << " in the file.\n";


    return 0;
}
