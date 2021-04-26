#include <iostream>

using namespace std;

class Bird
{
public:
    void makeSound()
    {
        cout << "Chirp-chirp" << endl;
    }
};


int main()
{
    Bird someBird;

    someBird.makeSound();

    return 0;
}