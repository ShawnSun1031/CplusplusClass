#include <iostream>

using namespace std;
double getSales(double& Northeast,double& Southeast,double& Northwest,double& Southwest);
void findHighest(double& Northeast,double& Southeast,double& Northwest,double& Southwest);
int main()
{
    double Northeast, Southeast, Northwest, Southwest;
    getSales(Northeast, Southeast, Northwest, Southwest);
    findHighest(Northeast, Southeast, Northwest, Southwest);
    return 0;
}
double getSales(double& Northeast,double& Southeast,double& Northwest,double& Southwest)
{
    cout << "What is the sales for the Northeast quarter? ";
    cin >> Northeast;
    cout << "\nWhat is the sales for the Southeast quarter? ";
    cin >> Southeast;
    cout << "\nWhat is the sales for the Northwest quarter? ";
    cin >> Northwest;
    cout << "\nWhat is the sales for the Southwest quarter? ";
    cin >> Southwest;
}
void findHighest(double& Northeast,double& Southeast,double& Northwest,double& Southwest)
{
    double highest;
    highest = Northeast;
    if (highest-Southeast<=0)
    {
        highest = Southeast;
    }
    if(highest-Northwest<=0)
    {
        highest = Northwest;
    }
    if(highest-Southwest<=0)
    {
        highest=Southwest;
    }
    if(highest==Northeast)
    {
        cout << "\nThe quarter has the greatest sales is Northeast. ";
        cout << "\nThe greatest sales is " << Northeast << " $.";
    }
    if(highest==Southeast)
    {
        cout << "\nThe quarter has the greatest sales is Southeast";
        cout << "\nThe greatest sales is " << Southeast << " $.";
    }
    if(highest==Northwest)
    {
        cout << "\nThe quarter has the greatest sales is Northwest";
        cout << "\nThe greatest sales is " << Northwest << " $.";
    }
    if(highest==Southwest)
    {
        cout << "\nThe quarter has the greatest sales is Southwest";
        cout << "\nThe greatest sales is " << Southwest << " $.";
    }
}
