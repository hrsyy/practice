#include <iostream>
using namespace std;
 
int getReverse(int number) 
{
    int r = number % 10;
    while (number /= 10) 
    {
        r = r * 10 + number % 10;
    }
    return r;
}
 
bool isPalindrom(int number) 
{
    return number == getReverse(number);
}
 
int main() 
{
    setlocale(LC_ALL, "RU");
    
    int number;

    cout << "Введите число: ";
    cin >> number;

    if (isPalindrom(number)) 
    {
        cout << "Это палиндром!" << endl;
    }
    else 
    {
        cout << "Это не палиндром!" << endl;
    }

    return 0;
}
