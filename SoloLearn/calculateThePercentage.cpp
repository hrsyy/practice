#include <iostream>
using namespace std;

class Account 
{
public:
    Account(){}

    Account(int a): balance(a)
    {
        interest += balance / 10;
    }

    int getTotal()
    {
        return balance + interest;
    }

    Account operator+(Account &other)
    {
        Account res;

        res = this->getTotal() + other.getTotal();

        return res;
    }

private:
    int balance = 0;
    int interest = 0;
};

int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    Account a(n1);
    Account b(n2);
    Account res = a + b;

    cout << res.getTotal();
}