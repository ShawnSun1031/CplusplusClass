#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

const int SIZE = 20;
void generate_number(int [],int [],int);
int bubble_sort(int [],int);
int select_sort(int [],int);


int main()
{
    int arr[SIZE],arr2[SIZE],t,j=0,bub=0,sel=0;
    unsigned seed;
    seed = (unsigned)time(NULL);
    srand(seed);
    do
    {
        generate_number(arr,arr2,SIZE);
        cout << "The #" << j+1 << " for 20 integers random array: \n";
        for(int i=0;i<SIZE;i++)
            cout << setw(3) <<arr[i] << "  ";
        cout << "\n";
        t = bubble_sort(arr,SIZE);
        bub += t;
        cout << "The buble sort process: (need " << t << " times to exchange the number.)\n";
        for(int i=0;i<SIZE;i++)
            cout << setw(3) << arr[i] << "  ";
        cout << "\n";
        t = select_sort(arr2,SIZE);
        sel += t;
        cout << "The select sort process: (need " << t << " times to exchange the number.)\n";
        for(int i=0;i<SIZE;i++)
            cout << setw(3) <<arr[i] << "  ";
        cout << "\n\n";
        j++;


    }while(j<20);
    cout << "The average number of exchanges for bubble sort(20 integers) is " << bub/20 << "\n";
    cout << "The average number of exchanges for select sort(20 integers) is " << sel/20 << "\n";
    return 0;
}

void generate_number(int arr[],int arr2[],int SIZE)
{

    for(int t=0; t<SIZE; t++)
	{
		arr[t] = rand()%100 ;
	}
	for(int i=0;i<SIZE;i++)
    {
        arr2[i]=arr[i];
    }

}
int bubble_sort(int arr[],int SIZE)
{
    int temp,t,change=0;
    bool swap;
    do
    {
        swap = false;
        for ( t=0;t<(SIZE-1);t++)
        {
            if(arr[t]>arr[t+1])
            {
                temp = arr[t];
                arr[t]=arr[t+1];
                arr[t+1]=temp;
                swap = true;
                change++;
            }
        }
    }while(swap);
    return change;

}

int select_sort(int arr[],int SIZE)
{
    int scan, minI,minV,change=0;
    for (scan=0;scan<(SIZE-1);scan++)
    {
        minI = scan;
        minV = arr[scan];
        for(int i=scan+1;i<SIZE;i++)
        {
           if(arr[i]<minV)
           {
               minV = arr[i];
               minI = i;
               change++;
           }
        }
        arr[minI]=arr[scan];
        arr[scan]=minV;
    }

    return change;

}
