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
    string getDescription(int index)
    {
        return bin[index].getDescreiption();
    }
    int getQuantity(int index)
    {
        return bin[index].getQty();
    }
    bool addParts(int binIndex, int q)
    {
        if(q<1)
            return false;
        else
        {
            bin[binIndex-1].setQty(bin[binIndex-1].getQty()+q);
            return true;
        }
    }
    bool removeParts(int binIndex, int q)
    {
        if(q<1 || q>bin[binIndex-1].getQty())
            return false;
        else
        {
            bin[binIndex-1].setQty(bin[binIndex-1].getQty()-q);
            return true;
        }
    }
};
void displayMenu(BinManager bin)
{
	cout << endl << "Warehouse Menu" << endl;
	string line;
	cout << line.assign(45, '-') << endl;
	for (int x = 0; x < 9; x++)
	{
		cout << x + 1 << ". " << bin.getDescription(x) << endl;
	}
	cout << "10. Quit" << endl;
}
void displayReport(BinManager bin)
{
	for (int x = 0; x < 9; x++)
	{
		cout << "There are now " << bin.getQuantity(x) << " " << bin.getDescription(x) << endl;
	}
}
int main()
{
    string d[9] = { "apple", "banana", "orange", "pencil", "watch", "tie", "knife", "paper", "eraser" };

	int q[9] = { 100,100, 100, 100, 100, 100, 100, 100, 100 };

	BinManager warehouse(9, d, q);

	int choice, selection, quantity;

	do
	{
		displayMenu(warehouse);
		cin >> choice;

		switch (choice)
		{
			case 1:
				cout << "Want do you want to do to the " << warehouse.getDescription(choice-1) << endl;
				cout << "1. ADD" << endl;
				cout << "2. REMOVE" << endl;
				cin >> selection;
				switch (selection)
				{
					case 1:
						cout << "How many items do you want to add? ";
						cin >> quantity;
						warehouse.addParts(choice, quantity);
						break;

					case 2:
						cout << "How many items do you want to remove? ";
						cin >> quantity;
						while (!warehouse.removeParts(choice, quantity))
                        {
                          cout << "You enter invalid number,please try again.\n";
                          cin >> quantity;
                        }
						break;
				}
				break;

			case 2:
				cout << "Want do you want to do to the " << warehouse.getDescription(choice-1) << endl;
				cout << "1. ADD" << endl;
				cout << "2. REMOVE" << endl;
				cin >> selection;
				switch (selection)
				{
				case 1:
					cout << "How many items do you want to add? ";
					cin >> quantity;
					warehouse.addParts(choice, quantity);
					break;

				case 2:
					cout << "How many items do you want to remove? ";
					cin >> quantity;
					while (!warehouse.removeParts(choice, quantity))
                    {
                        cout << "You enter invalid number,please try again.\n";
                        cin >> quantity;
                    }
					break;
				}
				break;

			case 3:
				cout << "Want do you want to do to the " << warehouse.getDescription(choice-1) << endl;
				cout << "1. ADD" << endl;
				cout << "2. REMOVE" << endl;
				cin >> selection;
				switch (selection)
				{
				case 1:
					cout << "How many items do you want to add? ";
					cin >> quantity;
					warehouse.addParts(choice, quantity);
					break;

				case 2:
					cout << "How many items do you want to remove? ";
					cin >> quantity;
					while (!warehouse.removeParts(choice, quantity))
                    {
                        cout << "You enter invalid number,please try again.\n";
                        cin >> quantity;
                    }
					break;
				}
				break;

			case 4:
				cout << "Want do you want to do to the " << warehouse.getDescription(choice-1) << endl;
				cout << "1. ADD" << endl;
				cout << "2. REMOVE" << endl;
				cin >> selection;
				switch (selection)
				{
				case 1:
					cout << "How many items do you want to add? ";
					cin >> quantity;
					warehouse.addParts(choice, quantity);
					break;

				case 2:
					cout << "How many items do you want to remove? ";
					cin >> quantity;
					while (!warehouse.removeParts(choice, quantity))
                    {
                        cout << "You enter invalid number,please try again.\n";
                        cin >> quantity;
                    }
					break;
				}
				break;

			case 5:
				cout << "Want do you want to do to the " << warehouse.getDescription(choice-1) << endl;
				cout << "1. ADD" << endl;
				cout << "2. REMOVE" << endl;
				cin >> selection;
				switch (selection)
				{
				case 1:
					cout << "How many items do you want to add? ";
					cin >> quantity;
					warehouse.addParts(choice, quantity);
					break;

				case 2:
					cout << "How many items do you want to remove? ";
					cin >> quantity;
					while (!warehouse.removeParts(choice, quantity))
                    {
                        cout << "You enter invalid number,please try again.\n";
                        cin >> quantity;
                    }
					break;
				}
				break;

			case 6:
				cout << "Want do you want to do to the " << warehouse.getDescription(choice-1) << endl;
				cout << "1. ADD" << endl;
				cout << "2. REMOVE" << endl;
				cin >> selection;
				switch (selection)
				{
				case 1:
					cout << "How many items do you want to add? ";
					cin >> quantity;
					warehouse.addParts(choice, quantity);
					break;

				case 2:
					cout << "How many items do you want to remove? ";
					cin >> quantity;
					while (!warehouse.removeParts(choice, quantity))
                    {
                        cout << "You enter invalid number,please try again.\n";
                        cin >> quantity;
                    }
					break;
				}
				break;

			case 7:
				cout << "Want do you want to do to the " << warehouse.getDescription(choice-1) << endl;
				cout << "1. ADD" << endl;
				cout << "2. REMOVE" << endl;
				cin >> selection;
				switch (selection)
				{
				case 1:
					cout << "How many items do you want to add? ";
					cin >> quantity;
					warehouse.addParts(choice, quantity);
					break;

				case 2:
					cout << "How many items do you want to remove? ";
					cin >> quantity;
					while (!warehouse.removeParts(choice, quantity))
                    {
                        cout << "You enter invalid number,please try again.\n";
                        cin >> quantity;
                    }
					break;
				}
				break;

			case 8:
				cout << "Want do you want to do to the " << warehouse.getDescription(choice-1) << endl;
				cout << "1. ADD" << endl;
				cout << "2. REMOVE" << endl;
				cin >> selection;
				switch (selection)
				{
				case 1:
					cout << "How many items do you want to add? ";
					cin >> quantity;
					warehouse.addParts(choice, quantity);
					break;

				case 2:
					cout << "How many items do you want to remove? ";
					cin >> quantity;
					while (!warehouse.removeParts(choice, quantity))
                    {
                        cout << "You enter invalid number,please try again.\n";
                        cin >> quantity;
                    }
					break;
				}
				break;


			case 9:
				cout << "Want do you want to do to the " << warehouse.getDescription(choice - 1) << endl;
				cout << "1. ADD" << endl;
				cout << "2. REMOVE" << endl;
				cin >> selection;
				switch (selection)
				{
				case 1:
					cout << "How many items do you want to add? ";
					cin >> quantity;
					warehouse.addParts(choice, quantity);
					break;

				case 2:
					cout << "How many items do you want to remove? ";
					cin >> quantity;
					while (!warehouse.removeParts(choice, quantity))
                    {
                        cout << "You enter invalid number,please try again.\n";
                        cin >> quantity;
                    }
					break;
				}
				break;

			case 10:
				displayReport(warehouse);
				break;

			default: cout << "Enter a valid input" << endl;
		}
	} while (choice >= 1 && choice < 10);

	return 0;

}
