#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int lottery_digits = 9;
const int SIZE = 5;

void generate_number(int[],int,int);
int matchCounter(int[],int[],int);
void display(int[],int[],int,int);


int main()
{
    int winningDigits[SIZE],player[SIZE],input,match;
    char choice;

    do
    {
        generate_number(winningDigits,SIZE,lottery_digits);
        cout << "Enter 5 numbers between 0-9 to join the lottery\n";
        for (int index=0;index<SIZE;index++)
        {
            cout << "Enter number#" << index+1 << ":  ";
            cin >> input;
            while(input<0 || input>9)
            {
                cout << "Please enter between 0-9.\n";
                cout << "Enter number#" << index+1 << ":  ";
                cin >> input;
            }
            player[index]=input;
        }
        match = matchCounter(winningDigits,player,SIZE);
        display(winningDigits,player,SIZE,match);
        cout << "Do you want to play again?(Y or N)";
        cin >> choice;
    }while(choice=='Y' || choice=='y');
    cout << "Lottery close,bye.\n";

    return 0;
}

void generate_number(int lottery[],int SIZE,int digits)
{
    unsigned seed;
    seed = time(0);
    srand(seed);
    for(int t=0; t<SIZE; t++)
	{
		lottery[t] = rand() % (lottery_digits+1);
	}
}

int matchCounter(int winning[],int play[],int SIZE)
{
    int repeat=0;
    for (int index=0;index<SIZE;index++)
    {
        if(winning[index]==play[index])
            repeat++;
    }
    return repeat;
}
void display(int winning[],int play[],int SIZE,int match)
{
    int index;
    cout << "The winning digits  are ";
    for (index=0;index<SIZE;index++)
        cout << winning[index] << " ";
    cout << "\nThe player`s digits are ";
    for (index=0;index<SIZE;index++)
        cout << play[index] << " ";
    cout << "\n" << match << " number matched!\n";

}
