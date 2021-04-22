#include <iostream>
using namespace std;


int main()
{
    setlocale(LC_ALL, "russian");
    {
        int x;

        cout << "Введите количество человек: ";
        cin >> x;

        if (x < 50)
        {
            x = 50 - x;
            cout << "Всего " << x << " свободных мест";

            return 0;
        }
        else
        {
            while (x >= 50)
            {
                x -= 50;

                if (x < 50)
                {
                    x = 50 - x;
                    cout << "Всего " << x << " свободных мест";
                }
            }
        }

    }
    return 0;
}
