#include <iostream>

using namespace std;

class InvBin
{
private:
    string description;
    int qty;
public:
    InvBin(string d = "empty",int q = 0)
    { description = d;qty=q;}
    void setDescription(string d)
    {description = d;}
    string getDescreiption()
    { return description;}
    void setQty(int q)
    { qty = q; }
    int getQty()
    { return qty; }
};
class BinManager
{
private:
    InvBin bin[30];
    int numBins;
public:
    BinManager()
    { numBins=0;}
    BinManager(int SIZE,string d[],int q[])
    {
        for (int i=0;i<SIZE;i++)
        {
            bin[i].setDescription(d[i]);
            bin[i].setQty(q[i]);
        }
    }
    int getIndex(string itemDescription)
    {
        int index;
        for(int i=0;i<10;i++)
        {
            if (bin[i].getDescreiption()== itemDescription)
            {
                return index = i+1;
            }
        }
        return index=-1;
    }
    string getDescription(int index)
    {
        return bin[index].getDescreiption();
    }
    int getQuantity(string itemDescription)
    {
        return bin[getIndex(itemDescription)].getQty();
    }
    bool addParts(string itemDescription, int q)
    {
        if(q<1)
            return false;
        else
        {
            bin[getIndex(itemDescription)].setQty(bin[getIndex(itemDescription)].getQty()+q);
            return true;
        }
    }
    bool removeParts(string itemDescription, int q)
    {
        if(q<1 || q>bin[getIndex(itemDescription)].getQty())
            return false;
        else
        {
            bin[getIndex(itemDescription)].setQty(bin[getIndex(itemDescription)].getQty()-q);
            return true;
        }
    }
};
void displayMenu(BinManager bin)
{
	cout << endl << "Warehouse Menu" << endl;
	string line;
	cout << line.assign(45, '-') << endl;
	for (int x = 0; x < 10; x++)
	{
		cout <<  bin.getDescription(x) << endl;
	}
}
void displayReport(BinManager bin,string d[])
{
	for (int x = 0; x < 9; x++)
	{
		cout << "There are now " << bin.getQuantity(d[x]) << " " << bin.getDescription(x) << endl;
	}
}
int main()
{
    string d[10] = { "apple", "banana", "orange", "pencil", "watch", "tie", "knife", "paper", "eraser", "quit" };

	int q[10] = { 100,100, 100, 100, 100, 100, 100, 100, 100,100 };

	BinManager warehouse(10, d, q);

	int selection, quantity,itemnumber;
	string choice;

	do
	{
		displayMenu(warehouse);
		cout << "Your choice is: (input the item name eg.apple,banana..)";
		cin >> choice;
		itemnumber = warehouse.getIndex(choice);

		switch (itemnumber)
		{
			case 1:
				cout << "Want do you want to do to the " << warehouse.getDescription(itemnumber-1) << endl;
				cout << "1. ADD" << endl;
				cout << "2. REMOVE" << endl;
				cout << "Your select is: ";
				cin >> selection;
				while(selection!=1 && selection!=2)
                {
                    cout << "Please select 1 or 2. Try again.\n";
                    cout << "Your select is: ";
				    cin >> selection;
                }
				switch (selection)
				{
					case 1:
						cout << "How many items do you want to add? ";
						cin >> quantity;
						while (!warehouse.addParts(choice, quantity))
                        {
                            cout << "The quantity should not less than 1,please try again.\n";
                            cout << "How many items do you want to add? ";
                            cin >> quantity;
                        }
						break;

					case 2:
						cout << "How many items do you want to remove? ";
						cin >> quantity;
						while (!warehouse.removeParts(choice, quantity))
                        {
                          cout << "The quantity should not less than 1 or  more items than the bin currently holds,please try again.\n";
                          cout << "How many items do you want to remove? ";
                          cin >> quantity;
                        }
						break;
				}
				break;

			case 2:
				cout << "Want do you want to do to the " << warehouse.getDescription(itemnumber-1) << endl;
				cout << "1. ADD" << endl;
				cout << "2. REMOVE" << endl;
				cout << "Your select is: ";
				cin >> selection;
				while(selection!=1 && selection!=2)
                {
                    cout << "Please select 1 or 2. Try again.\n";
                    cout << "Your select is: ";
				    cin >> selection;
                }
				switch (selection)
				{
				case 1:
					cout << "How many items do you want to add? ";
					cin >> quantity;
					while (!warehouse.addParts(choice, quantity))
                    {
                        cout << "The quantity should not less than 1,please try again.\n";
                        cout << "How many items do you want to add? ";
                        cin >> quantity;
                    }
					break;

				case 2:
					cout << "How many items do you want to remove? ";
					cin >> quantity;
					while (!warehouse.removeParts(choice, quantity))
                    {
                        cout << "The quantity should not less than 1 or  more items than the bin currently holds,please try again.\n";
                        cout << "How many items do you want to remove? ";
                        cin >> quantity;
                    }
					break;
				}
				break;

			case 3:
				cout << "Want do you want to do to the " << warehouse.getDescription(itemnumber-1) << endl;
				cout << "1. ADD" << endl;
				cout << "2. REMOVE" << endl;
				cout << "Your select is: ";
				cin >> selection;
				while(selection!=1 && selection!=2)
                {
                    cout << "Please select 1 or 2. Try again.\n";
                    cout << "Your select is: ";
				    cin >> selection;
                }
				switch (selection)
				{
				case 1:
					cout << "How many items do you want to add? ";
					cin >> quantity;
					while (!warehouse.addParts(choice, quantity))
                    {
                        cout << "The quantity should not less than 1,please try again.\n";
                        cout << "How many items do you want to add? ";
                        cin >> quantity;
                    }
					break;

				case 2:
					cout << "How many items do you want to remove? ";
					cin >> quantity;
					while (!warehouse.removeParts(choice, quantity))
                    {
                        cout << "The quantity should not less than 1 or  more items than the bin currently holds,please try again.\n";
                        cout << "How many items do you want to remove? ";
                        cin >> quantity;
                    }
					break;
				}
				break;

			case 4:
				cout << "Want do you want to do to the " << warehouse.getDescription(itemnumber-1) << endl;
				cout << "1. ADD" << endl;
				cout << "2. REMOVE" << endl;
				cout << "Your select is: ";
				cin >> selection;
				while(selection!=1 && selection!=2)
                {
                    cout << "Please select 1 or 2. Try again.\n";
                    cout << "Your select is: ";
				    cin >> selection;
                }
				switch (selection)
				{
				case 1:
					cout << "How many items do you want to add? ";
					cin >> quantity;
					while (!warehouse.addParts(choice, quantity))
                    {
                        cout << "The quantity should not less than 1 or  more items than the bin currently holds,please try again.\n";
                        cout << "How many items do you want to add? ";
                        cin >> quantity;
                    }
					break;

				case 2:
					cout << "How many items do you want to remove? ";
					cin >> quantity;
					while (!warehouse.removeParts(choice, quantity))
                    {
                        cout << "The quantity should not less than 1 or  more items than the bin currently holds,please try again.\n";
                        cout << "How many items do you want to remove? ";
                        cin >> quantity;
                    }
					break;
				}
				break;

			case 5:
				cout << "Want do you want to do to the " << warehouse.getDescription(itemnumber-1) << endl;
				cout << "1. ADD" << endl;
				cout << "2. REMOVE" << endl;
				cout << "Your select is: ";
				cin >> selection;
				while(selection!=1 && selection!=2)
                {
                    cout << "Please select 1 or 2. Try again.\n";
                    cout << "Your select is: ";
				    cin >> selection;
                }
				switch (selection)
				{
				case 1:
					cout << "How many items do you want to add? ";
					cin >> quantity;
					while (!warehouse.addParts(choice, quantity))
                    {
                        cout << "The quantity should not less than 1,please try again.\n";
                        cout << "How many items do you want to add? ";
                        cin >> quantity;
                    }
					break;

				case 2:
					cout << "How many items do you want to remove? ";
					cin >> quantity;
					while (!warehouse.removeParts(choice, quantity))
                    {
                        cout << "The quantity should not less than 1 or  more items than the bin currently holds,please try again.\n";
                        cout << "How many items do you want to remove? ";
                        cin >> quantity;
                    }
					break;
				}
				break;

			case 6:
				cout << "Want do you want to do to the " << warehouse.getDescription(itemnumber-1) << endl;
				cout << "1. ADD" << endl;
				cout << "2. REMOVE" << endl;
				cout << "Your select is: ";
				cin >> selection;
				while(selection!=1 && selection!=2)
                {
                    cout << "Please select 1 or 2. Try again.\n";
                    cout << "Your select is: ";
				    cin >> selection;
                }
				switch (selection)
				{
				case 1:
					cout << "How many items do you want to add? ";
					cin >> quantity;
					while (!warehouse.addParts(choice, quantity))
                    {
                        cout << "The quantity should not less than 1,please try again.\n";
                        cout << "How many items do you want to add? ";
                        cin >> quantity;
                    }
					break;

				case 2:
					cout << "How many items do you want to remove? ";
					cin >> quantity;
					while (!warehouse.removeParts(choice, quantity))
                    {
                        cout << "The quantity should not less than 1 or  more items than the bin currently holds,please try again.\n";
                        cout << "How many items do you want to remove? ";
                        cin >> quantity;
                    }
					break;
				}
				break;

			case 7:
				cout << "Want do you want to do to the " << warehouse.getDescription(itemnumber-1) << endl;
				cout << "1. ADD" << endl;
				cout << "2. REMOVE" << endl;
				cout << "Your select is: ";
				cin >> selection;
				while(selection!=1 && selection!=2)
                {
                    cout << "Please select 1 or 2. Try again.\n";
                    cout << "Your select is: ";
				    cin >> selection;
                }
				switch (selection)
				{
				case 1:
					cout << "How many items do you want to add? ";
					cin >> quantity;
					while (!warehouse.addParts(choice, quantity))
                    {
                        cout << "The quantity should not less than 1,please try again.\n";
                        cout << "How many items do you want to add? ";
                        cin >> quantity;
                    }
					break;

				case 2:
					cout << "How many items do you want to remove? ";
					cin >> quantity;
					while (!warehouse.removeParts(choice, quantity))
                    {
                        cout << "The quantity should not less than 1 or  more items than the bin currently holds,please try again.\n";
                        cout << "How many items do you want to remove? ";
                        cin >> quantity;
                    }
					break;
				}
				break;

			case 8:
				cout << "Want do you want to do to the " << warehouse.getDescription(itemnumber-1) << endl;
				cout << "1. ADD" << endl;
				cout << "2. REMOVE" << endl;
				cout << "Your select is: ";
				cin >> selection;
				while(selection!=1 && selection!=2)
                {
                    cout << "Please select 1 or 2. Try again.\n";
                    cout << "Your select is: ";
				    cin >> selection;
                }
				switch (selection)
				{
				case 1:
					cout << "How many items do you want to add? ";
					cin >> quantity;
					while (!warehouse.addParts(choice, quantity))
                    {
                        cout << "The quantity should not less than 1,please try again.\n";
                        cout << "How many items do you want to add? ";
                        cin >> quantity;
                    }
					break;

				case 2:
					cout << "How many items do you want to remove? ";
					cin >> quantity;
					while (!warehouse.removeParts(choice, quantity))
                    {
                        cout << "The quantity should not less than 1 or  more items than the bin currently holds,please try again.\n";
                        cout << "How many items do you want to remove? ";
                        cin >> quantity;
                    }
					break;
				}
				break;


			case 9:
				cout << "Want do you want to do to the " << warehouse.getDescription(itemnumber - 1) << endl;
				cout << "1. ADD" << endl;
				cout << "2. REMOVE" << endl;
				cout << "Your select is: ";
				cin >> selection;
				while(selection!=1 && selection!=2)
                {
                    cout << "Please select 1 or 2. Try again.\n";
                    cout << "Your select is: ";
				    cin >> selection;
                }
				switch (selection)
				{
				case 1:
					cout << "How many items do you want to add? ";
					cin >> quantity;
					while (!warehouse.addParts(choice, quantity))
                    {
                        cout << "The quantity should not less than 1,please try again.\n";
                        cout << "How many items do you want to add? ";
                        cin >> quantity;
                    }
					break;

				case 2:
					cout << "How many items do you want to remove? ";
					cin >> quantity;
					while (!warehouse.removeParts(choice, quantity))
                    {
                        cout << "The quantity should not less than 1 or  more items than the bin currently holds,please try again.\n";
                        cout << "How many items do you want to remove? ";
                        cin >> quantity;
                    }
					break;
				}
				break;

			case 10:
				displayReport(warehouse,d);
				break;

			default: cout << "Enter a valid input" << endl;
		}
	} while (itemnumber >= 1 && itemnumber < 10);

	return 0;

}
