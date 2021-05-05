#include <iostream>
using namespace std;


class TV
{
public:
    TV(int h, int w):height(h), width(w){};


    void area()
    {
        cout << "Your TV is " << height * width << " inches" << endl;
    }
private:
    int height;
    int width;
};


int main()
{
    int twWidth, twHeight;
    cout << "Enter the width of your TV: ";
    cin >> twWidth;
    cout << "Enter the height of your TV: ";
    cin >> twHeight;

    TV howManyInches(twHeight,twWidth);

    howManyInches.area();
}