#include <iostream>
#include <iomanip>
#include <string>
#include <windows.h>
#include <iomanip>
using namespace std;

//function prototype declarations
void appear1(HANDLE,int,int);
void appear2(HANDLE,int,int);
void appear3(HANDLE,int,int);
void appear4(HANDLE,int,int);
void placecursor(HANDLE,int,int);
int main()
{
  HANDLE screen=GetStdHandle(STD_OUTPUT_HANDLE);
  //variable to store the changing cursor position
  COORD position;
  int x,y,t;
  for (t=1,y=0,x=0;t>0;t++)
  {

      appear1(screen,x,y);
      Sleep(1000);
      system("CLS");

      appear2(screen,x+2,y);
      Sleep(1000);
      system("CLS");

      appear3(screen,x+4,y);
      Sleep(1000);
      system("CLS");

      appear4(screen,x+6,y);
      Sleep(1000);
      system("CLS");

      appear3(screen,x+8,y);
      Sleep(1000);
      system("CLS");

      appear2(screen,x+10,y);
      Sleep(1000);
      system("CLS");
      x = x + 12;
      while (x>=60)
      {
          x = 0;
      }


  }

  return 0;
}

void placecursor(HANDLE screen,int x,int y)
{
    COORD position;
    position.X = x;
    position.Y = y;
    SetConsoleCursorPosition(screen,position);
}
void appear1(HANDLE screen,int x,int y)
{
  placecursor(screen,x,y);
  cout << setw(11+x) << right << "\\/" << endl;
  placecursor(screen,x,y+1);
  cout << setw(11+x) << right << "00" << endl;
  placecursor(screen,x,y+2);
  cout << setw(11+x) << "~000000000" << endl;
}

//function definition to display inchworm in.
//second position.
void appear2(HANDLE screen,int x,int y)
{
  // display worm head
  placecursor(screen,x,y);
  cout << setw(11+x) << right << "\\/" << endl;
  placecursor(screen,x,y+1);
  cout << setw(11+x) << right << "0  00" << endl;
  placecursor(screen,x,y+2);
  cout << setw(11+x) <<  "~0000 0000" << endl;
}

//function definition to display inchworm in.
//third position.
void appear3(HANDLE screen,int x,int y)
{

  placecursor(screen,x,y);
  cout << setw(11+x) << right << "\\/" << endl;
  placecursor(screen,x,y+1);
  cout << setw(11+x) << right << "000 00" << endl;
  placecursor(screen,x,y+2);
  cout << setw(11+x) << "~000   000" << endl;
}

//function definition to display inchworm in.
// fourth position.
void appear4(HANDLE screen,int x,int y)
{

  //display worm head.
  placecursor(screen,x,y);
  cout << setw(11+x) << right << "\\/" << endl;
  placecursor(screen,x,y+1);
  cout << setw(11+x) << right << "0  00" << endl;
  placecursor(screen,x,y+2);
  cout << setw(11+x) << "~0000 0000" << endl;
}

