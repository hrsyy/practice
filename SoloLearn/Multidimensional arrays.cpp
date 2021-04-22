#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	const int rows = 6;
	const int cols = 6;

	float matrix[rows][cols] = {
		{0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0},
	};

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{	
			matrix[i][j] =  1;
			matrix[i][j] =  1;
			cout << setw(4) << matrix[i][j];
		}
		cout << endl;
	}

	return 0;
}
