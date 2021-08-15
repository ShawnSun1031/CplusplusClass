#include <iostream>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;


const int SIZE = 20;

void generate_number(int [],int);
int linear_search(int [],int,int);
void select_sort(int [],int);
int binay_search(int [],int,int,int*);


int main()
{
    int arr[SIZE],num,result1,result2;
    int test2;
    generate_number(arr,SIZE);
    cout << "Enter a number you want to search in an array of 20 integers(between 0~19)";
    cin >> num;
    for(int i=0;i<SIZE;i++)
            cout << setw(3) << arr[i] << "  ";
    cout << "\nAfter use the linear search: \n";
    result1 = linear_search(arr,SIZE,num);
    if (result1==-1)
        cout << "You did not earn " << num << " on any test \n";
    else
    {
        cout << "You earned " << num << " on count of the number of comparisons  ";
        cout << (result1+1) << ".\n";
    }
    select_sort(arr,SIZE);
    cout << "\nAfter use the binary search: \n";
    result2 = binay_search(arr,SIZE,num,&test2);
    if(result2==-1)
        cout << "You did not earn " << num << " on any test \n";
    else
    {
        cout << "You earned " << num << " on count of the number of comparisons ";
        cout << test2 << ".\n";
    }




    return 0;
}

void generate_number(int arr[],int SIZE)
{
    unsigned seed;
    seed = (unsigned)time(NULL);
    srand(seed);
    for(int t=0; t<SIZE; t++)
	{
		arr[t] = rand()%20 ;
	}
}

int linear_search(int arr[],int SIZE,int num)
{
    int index=0;
    int pos=-1;
    bool found = false;

    while(index<SIZE && !found)
    {
        if(arr[index]==num)
        {
            found = true;
            pos = index;
        }
        index++;
    }
    return pos;
}
void select_sort(int arr[],int SIZE)
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


}
int binay_search(int arr[],int SIZE,int num,int *test2)
{
    int first = 0,
        last = SIZE - 1,
        middle,
        test = 0,
        pos = -1;
    bool found = false;
    while(!found && first <= last)
    {
        middle = (first+last)/2;
        if(arr[middle]==num)
        {
            found = true;
            pos = middle;
        }
        else if (arr[middle]>num)
            last = middle - 1;
        else
            first = middle + 1;
        test++;
    }
    *test2 = test;
    return pos;
}
