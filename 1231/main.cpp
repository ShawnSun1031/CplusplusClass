// This program displays the sum of the numbers 1 - 100.
#include <iostream>
using namespace std;
int main()
{
int count = 1, total;
while (count <= 100)
{

total += count;
count++;
cout<< "The sum of the numbers 1 - 100 is ";
cout<< total <<endl;
}
return 0;
}
