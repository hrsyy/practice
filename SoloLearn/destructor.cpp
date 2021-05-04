#include <iostream>
using namespace std;

class Player
{
public:
    int points;

    Player(int x)
    {
        points = x;
        points %= 5;
    }

    ~Player()
    {
        cout << points;
    }
};


int main()
{
    int points;

    cin >> points;

    Player obj(points);
}
