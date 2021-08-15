#include <iostream>

using namespace std;

class PatientAccount
{
private:
    double day;
    double day_rate;
    double room_charge;

public:
    PatientAccount(double,double);
    double getDailyRate();
    double getDays();
    void getPatientDisplay(double& totalCost);
};
PatientAccount::PatientAccount(double dr = 0, double dy = 0)
{
	day_rate = dr;
	day = dy;
}
double PatientAccount::getDailyRate()
{
	cout << "Enter the daily rate for each day in the hospital: $";
	cin >> day_rate;

	return day_rate;
}
double PatientAccount::getDays()
{
	cout << "Enter the amount of days spent in the hospital: ";
	cin >> day;

	return day;
}
void PatientAccount::getPatientDisplay(double& totalCost)
{
	PatientAccount patient(getDailyRate(), getDays());

	totalCost = day * day_rate;

	cout << "\n";
	cout << "Days:                      " << day << endl;
	cout << "Daily Rate:               $" << day_rate << endl;
	cout << "Total room Cost:               $" << totalCost << endl;
	cout << "\n";
}
class Surgery
{
private:
    double charge;
    double surgeryCost;
    double surgeryType;
public:
    Surgery(double, double);
    double getCost();
    double getSurgeryType();
    void SurgeryMenuDisplay();
    void getSurgeryDisplay(double& totalCost1);
};
Surgery::Surgery(double co=0 , double s=0)
{
	surgeryCost = co;
	surgeryType = s;
}
double Surgery::getCost()
{
	cout << "Enter the total cost of surgery: $";
	cin >> surgeryCost;

	return surgeryCost;
}
void Surgery::SurgeryMenuDisplay()
{
    cout << "Type 1  Abdominal_surgery: 1000$\n";
    cout << "Type 2  Brain_surgery: 2000$\n";
    cout << "Type 3  Cardiac_surgery: 3000$\n";
    cout << "Type 4  Chest_surgery: 4000$\n";
    cout << "Type 5  Appendectomy: 5000$\n";
}
double Surgery::getSurgeryType()
{
	cout << "Enter the name of the surgery type: ";
	cin >> surgeryType;

	return surgeryType;
}
void Surgery::getSurgeryDisplay(double& totalCost1)
{
	Surgery patient(getCost(), getSurgeryType());

	totalCost1 = surgeryCost;

	cout << "Surgery Type:              " << surgeryType << endl;
	cout << "Surgery Cost:             $" << surgeryCost << endl;
	cout << "Total Surgery Cost:               $" << totalCost1 << endl;
	cout << "\n";
}
class Pharmacy
{
private:
    double medCost;
    double medName;
public:
    Pharmacy(double, double);
    double getMedCost();
    double getMedName();
    void PharmacyMenu();
    void getPharmacyDisplay(double& totalCost2);
};
Pharmacy::Pharmacy(double mc=0,double mn=0)
{
	medCost = mc;
	medName = mn;
}
double Pharmacy::getMedCost()
{
    double sum=0;
	cout << "Enter the cost of the mdeciation: $";
	cin >> medCost;
	return medCost;
}

double Pharmacy::getMedName()
{
	cout << "Enter the number of the medication name: (input 99 to exit)";
	cin >> medName;
	while (medName!=99)
        cin >> medName;
	return medName;
}
void Pharmacy::PharmacyMenu()
{
    cout << "Medication 1  Adrenaline: 100$.\n";
    cout << "Medication 2  Alcohol: 200$.\n";
    cout << "Medication 3  Lexotan: 300$.\n";
    cout << "Medication 4  Dormicum: 400$.\n";
    cout << "Medication 5  Ativan: 500$.\n";
}
void Pharmacy::getPharmacyDisplay(double& totalCost2)
{
	Pharmacy patient(getMedCost(), getMedName());

	totalCost2 = medCost;

	cout << "Medication Cost:          $" << medCost << endl;
	cout << "Total Medication Cost:               $" << totalCost2 << endl;
	cout << "\n";
}
int main()
{
    double totalCost,totalCost1,totalCost2,totalCost3;
    char choice;

	PatientAccount patient;
	Surgery patient1;
	Pharmacy patient2;

	patient.getPatientDisplay(totalCost);
	patient1.SurgeryMenuDisplay();
	patient1.getSurgeryDisplay(totalCost1);
	patient2.PharmacyMenu();
	patient2.getPharmacyDisplay(totalCost2);

	totalCost3 = ((totalCost + totalCost1) + totalCost2);
	cout << "Do you want to check out?(enter y or n)";
	cin >> choice;
	if (choice=='y' || choice =='Y')
    {
        cout << "\nTotal Cost Hospital:     $" << totalCost3 << endl;
	    cout << "\n";
    }


	cout << endl << "Press ENTER to exit...";
	cin.clear();
	cin.sync();
	cin.get();

	return 0;
}
