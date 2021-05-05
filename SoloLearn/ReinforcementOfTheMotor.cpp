#include <iostream>
using namespace std;

class Engine
{
public:
    Engine(int p):power(p){};

    void start()
    {
        cout << "Engine ON (" << power << " horsepower)" << endl;
    }
private:
    int power;
};


class Car
{
public:
    Car(Engine x, string c, int y): e(x), color(c), year(y) {};

    void start()
    {
        cout << "Starting" << endl;       
        e.start();
    }

private:
    Engine e;
    string color;
    int year;
};


int main()
{
    int power, year;
    string color;
    cout << "Power: ";
    cin >> power;
    cout << "Color: ";
    cin >> color;
    cout << "Year: ";
    cin >> year;

    Engine e(power);
    
    Car c(power, color, year);
    c.start();
}