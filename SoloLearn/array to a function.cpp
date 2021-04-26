#include <iostream>
#include <string>

using namespace std;


void winners(string custom[], const int size, int winner)
{
    for (int i = 0; i < size; i++)
    {
        i += winner - 1;
        if (i < size)
        {
            cout << custom[i] << endl;
        }
        else 
        {
            break;
        }
    }
}


int main()
{
    string customers[] = { "Alice", "Bob", "Rayan", "Emma", "Ann",
                           "Bruce", "Synthia", "Daniel", "Richard",
                           "Sam", "Nick", "Mary", "Paul"};

    int winner;
    cin >> winner;

    winners(customers, 13, winner);
}