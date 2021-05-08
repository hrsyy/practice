#include <iostream>
using namespace std;

class Product
{
public:
    void info()
    {
        cout << price << ", " << weight;
    }
protected:
    double price;
    int weight;
};

class Fruit : public Product
{
public:
    string type;
    void setInfo(double p, int w)
    {
        price = p;
        weight = w;
    }
};

int main()
{
    Fruit obj;
    obj.type = "Apple";
    obj.setInfo(4.99, 10);
    obj.info();

    return 0;
}