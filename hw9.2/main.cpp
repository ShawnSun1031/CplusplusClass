#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

int main()
{
    int array[128],count[26]={0},alphabat;
    string s;
    char a='a',z='z',A='A',Z='Z';
    char name[100];
    ifstream infile;
    cout << "Enter a file name you want to use.\n";
    cin >> name;
    infile.open(name);
    getline(infile,s);
    for(int i=0;i<s.length();i++)
    {
        array[i]= static_cast<int>(s[i]);
        if (array[i]>=static_cast<int>(a) && array[i]<=static_cast<int>(z))
            array[i]=toupper(array[i]);
    }
    alphabat=static_cast<int>(A);
    for (int j=0;j<s.length();j++)
    {
        for(int k=0;k<26;k++)
        {
            if(alphabat==array[j])
                count[k]=count[k]+1;
            alphabat++;
        }
        alphabat=static_cast<int>(A);
    }
    alphabat=static_cast<int>(A);
    cout << "The file content is below:\n";
    cout << s << "\n";
    cout << "Below is the letter frequency:\n";
    for(int w=0;w<26;w++)
    {
        cout << static_cast<char>(alphabat) << " : " << count[w] << "\n";
        alphabat++;
    }
    infile.close();
    return 0;
}
