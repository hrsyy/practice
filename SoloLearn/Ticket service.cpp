#include <iostream>
using namespace std;


int main()
{   
    setlocale(LC_ALL, "russian");

    int ages[5];
    int x = 0;
    int tprice = 50;
    double fprice = 0;
    double min;

    for (int i = 0; i < 5; ++i)
    {
        cout << "Клиент" << ": " << ++x << " Возраст: ";
        cin >> ages[i];
        
    }

    min = ages[0];
    for (int i = 1; i < 5; i++)
    {
        if (min > ages[i]) min = ages[i];
    }

    
    fprice = (min / 100) * 50;
    fprice = tprice - fprice;
    cout << "Цена билетов с учетом скидки: " << fprice << "$";


    return 0;
}