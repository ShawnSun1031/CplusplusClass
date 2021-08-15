#include <iostream>

using namespace std;
class Population
{
private:
    double current_population;
    double annual_birth;
    double annual_death;
public:
    population(double,double,double);
    double getBirthRate();
    double getDeathRate();
};
Population::population(double p,double b,double d)
{
    current_population = p;
    annual_birth = b;
    annual_death = d;
}
double Population::getBirthRate()
{
    return annual_birth/current_population;
}
double Population::getDeathRate()
{
    return annual_death/current_population;
}
int main()
{
    Population obj;
    double p,b,d;
    cout << "What is the population of the city?";
    cin >> p;
    if (p<2)
        p = 2;
    cout << "\nWhat is the annual birth of the city?";
    cin >> b;
    if (b<0)
        b = 0;
    cout << "\nWhat is the annual death of the city?";
    cin >> d;
    if (d<0)
        d = 0;
    obj.population(p,b,d);
    cout << "The birth rate is " << obj.getBirthRate() << endl;
    cout << "The death rate is " << obj.getDeathRate() << endl;
    return 0;
}
