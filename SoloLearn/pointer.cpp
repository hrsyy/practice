#include <iostream>

using namespace std;

void promotion(int &megabytes)
{
    int multipler;
    cin >> multipler;
    megabytes *= multipler;
}

int main()
{
    int megabytes;
    cin >> megabytes;

    cout << "Before the promotion: " << megabytes << endl;

    promotion(megabytes);
    
    cout << "After the promotion: " << megabytes << endl;
    
    return 0;
}