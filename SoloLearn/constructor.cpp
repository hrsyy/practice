#include <iostream>
#include <string>

using namespace std;

class Painting
{
public:
	Painting(string userName)
	{
		name = userName;
		cout << name;
	}


private:
	string name;
};

int main()
{
	string userName;
	cin >> userName;

	Painting Painting(userName);

	return 0;
}