#include<iostream>
#include<iomanip>
#include<string>
#include<cmath>

using namespace std;
const int SIZE = 5;

struct DrinkingMachine
{
	string name;
	double price;
	double money;
	double totalMoney;
	int quantity;
	DrinkingMachine()
	{
		name = "";
		price = 1.00;
		quantity = 20;
	}

	DrinkMachine(string s, double p, int i)
	{
		name = s;
		price = p;
		quantity = i;
	}
};

class DrinkManage
{
private:
	DrinkingMachine drinks[SIZE];
	double sales=0;
	double inputMoney(int);


public:
    ~DrinkManage();
	void displayChoices();
	void buyDrink(int n);
	void setup();
	void dailyReport();

};
DrinkManage::~DrinkManage()
{
    dailyReport();

}
void DrinkManage::setup()
{

	drinks[0].name = "Cola                $";
	drinks[1].name = "Root Beer           $";
	drinks[2].name = "Lemon-Lime          $";
	drinks[3].name = "Grape Soda          $";
	drinks[4].name = "Water               $";

}

void DrinkManage::displayChoices()
{
	int bevChoice;
	for (int i = 0; i < SIZE; i++)
		cout << (i + 1) << ") " << drinks[i].name << drinks[i].price << setw(10) << "   Number in Machine:  " << drinks[i].quantity << endl;
	cout << "\nSelect a drink(1-5) or enter 6 to quit: ";
	cin >> bevChoice;

	while (bevChoice < 0 || bevChoice > 6)
	{
		cout << "Invalid Entry. Please enter a value 1-5 " << endl;
		cin >> bevChoice;
	}
	if (bevChoice > 0 && bevChoice < 6)
	{
		bevChoice--;
		buyDrink(bevChoice);
	}

}

void DrinkManage::buyDrink(int bevChoice)
{
	double money, change;
	int number;
	char choice;

	money = inputMoney(bevChoice);
	cout << "Do you want to continue?(Y or N)\n";
	cin >> choice;
	if(choice=='Y'|| choice=='y')
    {
        if (money >= drinks[bevChoice].price)
        {
            change = (money - drinks[bevChoice].price);
            cout << "Retune the change: " << change << "\n";
            if (drinks[bevChoice].quantity > 0)
            {
                drinks[bevChoice].quantity -= 1;
                sales += drinks[bevChoice].price;

            }
            else if (drinks[bevChoice].quantity <= 0)
                cout << "SOLD OUT" << endl;
            cout << "Here is your beverage.\n";
        }
        else if (money < drinks[bevChoice].price)
        {
            cout << "Not enough money." << endl;
            cout << "Return you " << money << " $.\n";
        }

	}
	else
        cout << "Return all your money: " << money << "\n";


}



double DrinkManage::inputMoney(int bevChoice)
{
	double money;

	cout << fixed << showpoint << setprecision(2);
	cout << "Enter the amount of money you want to put in to the machine: ";
	cin >> money;


	return money;
}

void DrinkManage::dailyReport()
{
    cout << "\n\nToday is over, below is the machine currently condition.\n";
	cout << "Drink                     Number Left \n";

	for (int i = 0; i < 5; i++)
	{
		cout << setw(10) << drinks[i].name << "         " << drinks[i].quantity << endl;
	}

	cout << "Today total money collected: " << sales << endl;

}

int main()
{
	DrinkManage check;
	char beverage;
	check.setup();
	do
	{
	    check.displayChoices();
		cout << "Do you want to make another purchase? Please enter Y or N: ";
		cin >> beverage;
		cout << "\n";

	} while (beverage == 'Y' || beverage == 'y');

	return 0;
}
