#include <iostream>
#include <cmath>
using namespace std;

class Number
{
public:
    Number(int n)
    {
        num = n;
    }

    int square() const;

private:
    int num;
};

int Number::square() const
{
    cout << "sqare " << pow(num, 2) << endl;
}
int main()
{
    int x;
    cin >> x;
    const Number myNum(x);
    cout << myNum.square();
}