#include <iostream>

using namespace std;

class Car
{
private:
    int year;
    string make;
    int speed;
public:
    car(int,string);
    int get_year()
    {return year;}
    string get_make()
    {return make;}
    int get_speed()
    {return speed;}
    void accelerate();
    void brake();

};

Car::car(int y,string s)
{
    year = y;
    make = s;
    speed = 0;
}

void Car::accelerate()
{
    speed = speed + 5;
}
void Car::brake()
{
    speed = speed - 5;
}
int main()
{
    Car object;
    int y;
    string s;

    cout << "What is the model year?\n";
    cin >> y;
    cout << "What is the car make of?\n";
    cin >> s;
    object.car(y,s);

    cout << "The moder year you enter is : " << object.get_year();
    cout << "\nThe make of car you enter is: " << object.get_make();
    for(int up=1;up<=5;up++)
        object.accelerate();
    cout << "\nAfter five times accelerate.\n";
    cout << "The current speed is " << object.get_speed() << endl;
    for(int down=1;down<=5;down++)
        object.brake();
    cout << "After five times brake.\n";
    cout << "The current speed is " << object.get_speed() << endl;
    return 0;
}
