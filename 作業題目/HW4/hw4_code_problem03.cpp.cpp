#include <iostream>

using namespace std;
class Inventory
{
private:
    int itemNumber;
    int quantity;
    double cost;
    double totalCost;
public:
    inventory()
    {
        itemNumber = 0;
        quantity = 0;
        cost = 0;
        totalCost = 0;
    }
    inventory_2(int newItemNumber, int newQuantity, double newCost)
    {
        itemNumber = newItemNumber;
        quantity = newQuantity;
        cost = newCost;
    }
    void setitemNumber(int iN)
    {
        itemNumber = iN;
    }
    void setQuantity(int Q)
    {
        quantity = Q;
    }
    void setCost(double C)
    {
        cost = C;
    }
    int getitemNumber()
    {
        return itemNumber;
    }
    int getQuantity()
    {
        return quantity;
    }
    double getCost()
    {
        return cost;
    }
    double getTotalCost()
    {
        totalCost =  quantity * cost;
        return totalCost;
    }
};

void storevalue(Inventory &info)
{
    int itemNumber;
	int quantity;
	double cost;
	double totalCost;

	cout << "Enter the Item Number: ";
	cin >> itemNumber;
	while (itemNumber < 0)
	{
		cout << "Please enter a positive value for the Item Number: ";
		cin >> itemNumber;
	}
	cout << "Enter the Quantity of the item: ";
	cin >> quantity;
	while (quantity < 0)
	{
		cout << "Please enter a positive value for the Quantity of the item: ";
		cin >> quantity;
	}
	cout << "Enter the Cost of the item: ";
	cin >> cost;
	while (cost < 0)
	{
		cout << "Please enter a positive value for the Cost of the item: ";
		cin >> cost;
	}
	info.inventory_2(itemNumber,quantity,cost);
}
int main()
{

	Inventory info;
    storevalue(info);
	cout << "The Item Number is: " << info.getitemNumber() << endl;
	cout << "The Quantity is: " << info.getQuantity() << endl;
	cout << "The Cost is: " << info.getCost() << endl;
	cout << "The Total Cost is: " << info.getTotalCost() << endl;

	return 0;
}
