#include <iostream>
using namespace std;


int main()
{
    setlocale(LC_ALL, "russian");
    {
        int a;
        cout << "Введите целочисленное число: ";
        cin >> a;
        cout << "Ваше число: " << a;

        return 0;
    }
}