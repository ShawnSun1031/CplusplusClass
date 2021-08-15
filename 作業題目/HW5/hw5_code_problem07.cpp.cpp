#include <iostream>
#include <iomanip>

using namespace std;

void display(char[3][3]);
void displace(char[3][3]);
bool check_win(char[3][3]);
bool check_tie(char[3][3]);

int main()
{
    char tic_tac_toe[3][3]={{'*','*','*'},{'*','*','*'},{'*','*','*'}};
    int row,col;
    char player1='X',player2='O';
    display(tic_tac_toe);
    displace(tic_tac_toe);


    return 0;
}

void display(char tic[3][3])
{
    for(int row=0;row<3;row++)
    {
        for(int col=0;col<3;col++)
        {
            cout <<  "|" << tic[row][col] << "|" ;
            if (col==2)
                cout << "\n";
        }
    }
}
bool check_win(char tic[3][3])
{
    char player1='X',player2='O';
    if(tic[0][0]==player1 && tic[0][1]==player1 && tic[0][2]==player1)
        return true;
    if(tic[0][0]==player1 && tic[1][1]==player1 && tic[2][2]==player1)
        return true;
    if(tic[0][0]==player1 && tic[1][0]==player1 && tic[2][0]==player1)
        return true;
    if(tic[0][2]==player1 && tic[1][1]==player1 && tic[2][0]==player1)
        return true;
    if(tic[0][2]==player1 && tic[1][2]==player1 && tic[2][2]==player1)
        return true;
    if(tic[2][0]==player1 && tic[2][1]==player1 && tic[2][2]==player1)
        return true;
    if(tic[0][1]==player1 && tic[1][1]==player1 && tic[2][1]==player1)
        return true;
    if(tic[1][0]==player1 && tic[1][1]==player1 && tic[1][2]==player1)
        return true;

    if(tic[0][0]==player2 && tic[0][1]==player2 && tic[0][2]==player2)
        return true;
    if(tic[0][0]==player2 && tic[1][1]==player2 && tic[2][2]==player2)
        return true;
    if(tic[0][0]==player2 && tic[1][0]==player2 && tic[2][0]==player2)
        return true;
    if(tic[0][2]==player2 && tic[1][1]==player2 && tic[2][0]==player2)
        return true;
    if(tic[0][2]==player2 && tic[1][2]==player2 && tic[2][2]==player2)
        return true;
    if(tic[2][0]==player2 && tic[2][1]==player2 && tic[2][2]==player2)
        return true;
    if(tic[0][1]==player2 && tic[1][1]==player2 && tic[2][1]==player2)
        return true;
    if(tic[1][0]==player2 && tic[1][1]==player2 && tic[1][2]==player2)
        return true;

    else
        return false;
}
bool check_tie(char tic[3][3])
{
    char empt='*';
    if(tic[0][0]!=empt && tic[0][1]!=empt && tic[0][2]!=empt &&
       tic[1][0]!=empt && tic[1][1]!=empt && tic[1][2]!=empt &&
       tic[2][0]!=empt && tic[2][1]!=empt && tic[2][2]!=empt  )
        return true;
    else
        return false;
}

void displace(char tic[3][3])
{
    int row,col;
    char player1='X',player2='O',empt='*';
    cout << "\nChoose a position to put your O or X.(input the row and column number.)\n";
    do
    {
        cout << "\nFor player1:\n";
        cout << "Choose the row.(Enter 1-3)";
        cin >> row;
        while(row<0 || row>3)
        {
            cout << "You should enter 1-3.try again.";
            cin >> row;
        }
        cout << "Choose the column.(Enter 1-3)";
        cin >> col;
        while(col<0 || col>3)
        {
            cout << "You should enter 1-3.try again.";
            cin >> col;
        }
        while(tic[row-1][col-1]!=empt)
        {
            cout << "You can`t put here, it has been used.Try again!\n";
            cout << "Choose the row.(Enter 1-3)";
            cin >> row;
            cout << "Choose the column.(Enter 1-3)";
            cin >> col;
        }
        tic[row-1][col-1]= player1;
        cout << "\n";
        display(tic);
        if (check_win(tic))
        {
            cout << "Player1 wins!.\n";
            break;
        }
        if (check_tie(tic))
        {
            cout << "End in a tie!\n";
            break;
        }
        cout << "\nFor player2:\n";
        cout << "Choose the row.(Enter 1-3)";
        cin >> row;
        while(row<0 || row>3)
        {
            cout << "You should enter 1-3.try again.";
            cin >> row;
        }
        cout << "Choose the column.(Enter 1-3)";
        cin >> col;
        while(col<0 || col>3)
        {
            cout << "You should enter 1-3.try again.";
            cin >> col;
        }
        while(tic[row-1][col-1]!=empt)
        {
            cout << "You can`t put here, it has been used.\n";
            cout << "Choose the row.(Enter 1-3)";
            cin >> row;
            cout << "Choose the column.(Enter 1-3)";
            cin >> col;
        }
        tic[row-1][col-1]= player2;
        cout << "\n";
        display(tic);
        if (check_win(tic))
        {
            cout << "Player2 wins!.\n";
            break;
        }
        if (check_tie(tic))
        {
            cout << "End in a tie!\n";
            break;
        }


    }while(!check_win(tic));


}
