#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
   int L;
   string word,input;
   char name[100];
   cout<<"Enter file name(xxx.txt): ";
   cin>>name;
   cout<<"and the string you want to search: ";
   cin>>word;
   cout<<"searching......."<<endl;
   fstream datafile;
   datafile.open(name, ios::in);
   getline(datafile, input,'\n');
   int times=0;
   while(!datafile.fail())
   {
        size_t found = input.find(word);
        if (found != std::string::npos)
        {
            times++;
            cout<<input<<endl;
        }
    int cfound = static_cast<int>(found);
    while(word.length()<=input.length()-cfound)
    {
        found = input.find(word, found+1);
        if (found != std::string::npos)
        {
            times++;
            cout<<input<<endl;
            cfound = static_cast<int>(found);
        }
        else
            break;
    }
       getline(datafile, input,'\n');
   }
   datafile.close();
   cout<<"The word "<<word<<" appeared "<< times<<" times!!"<<endl;


}
