#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "russian");

    int n;

    cout << "Введите целое число: ";
    cin >> n;

    for (; n > 0; n--)
        if ((n % 5) == 0)
            cout << n << endl << "beep" << endl;
        else
            cout << n << endl;

    return 0;
}