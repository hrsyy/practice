#include <iostream>
using namespace std;


class Phone
{
public:
    Phone()
    {
        charge = 100;
    }

    void use()
    {
        charge -=10 ;
    }

    void getCharge()
    {
        cout << charge << endl;
    }
    
private:
    int charge;
};


int main()
{
    Phone phone;
    phone.use();

    Phone *ptr = &phone;
    ptr->getCharge();

    return 0;
}