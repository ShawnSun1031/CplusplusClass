#include <iostream>

using namespace std;

const int numberRows = 3;
const int numberCol = 7;

double avg(const double[][numberCol],int);
void least(const double[][numberCol],int);
void greatest(const double[][numberCol],int);

int main()
{
    double monkey[3][7];
    int row,column;
    double pounds;
    cout << "Enter the monkey data!\n";
    for (row=0;row<3;row++)
    {
        cout << "How many pounds of food the monkey #" << row+1 << " eats each day during a week?\n";
        for (column=0;column<7;column++)
        {
            cout << "Day#" << column+1 << " ";
            cin >> pounds;
            while(pounds<0)
            {
                cout << "Please enter a valid pounds!\n";
                cin >> pounds;
            }
            monkey[row][column]= pounds;
        }
    }
    cout << "Average amount of food eaten per day by the whole family of monkeys is " << avg(monkey,numberRows) << " pounds\n";
    least(monkey,numberRows);
    greatest(monkey,numberRows);


    return 0;
}

double avg(const double monkey[][numberCol],int numberRows)
{
    double total=0,avg;
    for (int row=0;row<numberRows;row++)
    {
        for(int col=0;col<numberCol;col++)
        {
            total += monkey[row][col];
        }
    }
    avg = total/7;
    return avg;
}
void least(const double monkey[][numberCol],int numberRows)
{
    int smallmonkeynumber,smallday;
    double smallest;
    smallest = monkey[0][0];
    for (int row=0;row<numberRows;row++)
    {
        for(int col=0;col<numberCol;col++)
        {
            if (smallest>=monkey[row][col])
            {
                smallest = monkey[row][col];
                smallday = col + 1;
                smallmonkeynumber = row + 1;
            }

        }
    }
    cout << "\nThe least amount of food eaten during the week is monkey#" << smallmonkeynumber << " ate " << smallest << " pounds " << " in day#" << smallday;
}

void greatest(const double monkey[][numberCol],int numberRows)
{
    int bigmonkeynumber,bigday;
    double largest;
    largest = monkey[0][0];
    for (int row=0;row<numberRows;row++)
    {
        for(int col=0;col<numberCol;col++)
        {
            if (largest<=monkey[row][col])
            {
                largest = monkey[row][col];
                bigday = col + 1;
                bigmonkeynumber = row + 1;
            }

        }
    }
    cout << "\nThe greatest amount of food eaten during the week is monkey#" << bigmonkeynumber << " ate " << largest << " pounds " << " in day#" << bigday;
}
