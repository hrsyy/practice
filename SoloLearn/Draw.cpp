#include <iostream>
using namespace std;


class Shape
{
public:
    void draw()
    {
        cout << "Drawing...";
    }
};

class Rectangle :public Shape
{
public:
    Rectangle(int w, int h) : width(w), height(h)
    {
        cout << w << "x" << h << endl;
    }
private:
    int width;
    int height;
};


int main()
{
    int x, y;
    cin >> x >> y;

    Rectangle d(x, y);
    d.draw();

    return 0;
}