#include <iostream>

using namespace std;

int recSum(int n)
{
	if(n == 1 || n == 0)
	{
		return n;
	}
	else
	{
		return n + recSum(n - 1);
	}


	//return *pn;
}

int main()
{
	setlocale(LC_ALL, "RU");


	int n;
	cout << "Введите количество приготовленных тортов: ";
	cin >> n;

	cout << "Всего " << recSum(n) << " шт";

	return 0;
}