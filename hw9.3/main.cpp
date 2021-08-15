#include <iostream>
#include <fstream>
#include <cstring>
#include <sstream>
#include <iomanip>
using namespace std;

int main()
{
    fstream file;
    ostringstream outstr,out2;
    char name[20];

    file.open("name.txt",ios::out|ios::in);
    char initial[8][20]={"Becky Warren","Joe Looney","Geri Palmer","Lynn Presnell","Holly Gaddis","Sam Wiggins","Bob Kain","Tim Haynes"};

    char temp[8][20];
    bool change;
    int age[8]={30,25,45,50,60,33,25,30};
    int temp_age;

    char insert_string[20];
    char total[9][20]={"Becky Warren","Joe Looney","Geri Palmer","Lynn Presnell","Holly Gaddis","Sam Wiggins","Bob Kain","Tim Haynes"};
    int insert_age;
    int new_age[9]={30,25,45,50,60,33,25,30};


    do
    {
        change=false;
        for(int i=0;i<8;i++)
            strcpy(temp[i],initial[i]);
        for (int i=0;i<7;i++)
        {
            if(strcmp(initial[i],initial[i+1])>0)
            {
                temp_age = age[i+1];
                age[i+1]=age[i];
                age[i]=temp_age;
                strcpy(initial[i+1],initial[i]);
                strcpy(initial[i],temp[i+1]);
                change=true;
            }
        }
    }while(change);

    for (int i=0;i<8;i++)
    {
        outstr << left <<setw(20) << initial[i] << " : " << age[i] <<  " years old.\n";
    }
    cout << outstr.str();
    file<<outstr.str();


    cout << "Enter a name and age you want to add in the file.(It will auto sort.)\n";
    cout << "Name: ";
    cin.getline(insert_string,20);
    cout << "Age: ";
    cin >> insert_age;
    strcat(total[8],insert_string);
    new_age[8]=insert_age;
    do
    {
        change=false;
        for(int i=0;i<9;i++)
            strcpy(temp[i],total[i]);
        for (int i=0;i<8;i++)
        {
            if(strcmp(total[i],total[i+1])>0)
            {
                temp_age = new_age[i+1];
                new_age[i+1]=new_age[i];
                new_age[i]=temp_age;
                strcpy(total[i+1],total[i]);
                strcpy(total[i],temp[i+1]);
                change=true;
            }
        }
    }while(change);


    for (int i=0;i<9;i++)
    {
        out2 << left << setw(20) << total[i] << " : " << new_age[i] << " years old.\n";
    }
    cout << out2.str();
    file << out2.str();
    file.close();



    return 0;
}


