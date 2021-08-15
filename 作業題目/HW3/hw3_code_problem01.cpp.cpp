#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
int patient(int&,int&,int&,int&);
int patient(int&,int&);
void file1(int&,int&,int&,int&,int&);
void file2(int&,int&,int&);

int main()
{
    int number_of_day, rate, charge_service, charge_medication;
    int choice, total;
    cout << "Whether you are in-patient or out-patient?\n";
    cout << "If you are in-patient please enter 1 .\n";
    cout << "If you are out-patient plpease enter 2 .\n";
    cin  >> choice;
    if(choice==1)
    {
        total = patient(number_of_day, rate, charge_service, charge_medication);
        file1(number_of_day, rate, charge_service, charge_medication, total);
    }
    else if(choice==2)
    {
        total = patient(number_of_day, rate, charge_service, charge_medication);
        file2(charge_service, charge_medication, total);
    }
    else if(choice!=1 && choice!=2)
    {
        cout << "Please enter a valid number!";
        exit(0);
    }
    cout << "The total charge you spent was " << total << "$.\n";

    return 0;
}
int patient(int& number_of_day,int& rate,int& charge_service,int& charge_medication)
{
    cout << "What is the number of days you spent in the hospital? ";
    cin >> number_of_day;
    cout << "\nWhat is the daily rate? ";
    cin >> rate;
    cout << "\nWhat is the charges for hospital services? ";
    cin >> charge_service;
    cout << "\nWhat is the charges for the hospital medication charges? ";
    cin >> charge_medication;
    return (number_of_day*rate)+charge_service+charge_medication;

}
int patient(int& charge_service,int& charge_medication)
{
    cout << "\nWhat is the charges for hospital services? ";
    cin >> charge_service;
    cout << "\nWhat is the charges for the hospital medication charges? ";
    cin >> charge_medication;
    return charge_service+charge_medication;
}
void file1(int& number_of_day,int& rate,int& charge_service,int& charge_medication,int& total)
{
    ofstream outfile;
    outfile.open("file1.txt");
    outfile << "The the number of days you spent in the hospital is " << number_of_day ;
    outfile << "\nThe daily rate is " << rate;
    outfile << "\nthe charges for hospital services is " << charge_service;
    outfile << "\nthe charges for the hospital medication charges is " << charge_medication;
    outfile << "\nThe total charge you spent was " << total << "$.\n";

}
void file2(int& charge_service,int& charge_medication,int& total)
{
    ofstream outfile;
    outfile.open("file2.txt");
    outfile << "the charges for hospital services is " << charge_service;
    outfile << "\nthe charges for the hospital medication charges is " << charge_medication;
    outfile << "\nThe total charge you spent was " << total << "$.\n";
}
