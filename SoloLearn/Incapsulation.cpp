#include <iostream>

using namespace std;

class horsePowerCheck
{
public:
	void setHorsepower(double userValue)
	{
		Horsepower = userValue;
		if (Horsepower <= maxValue)
		{
			check = true;
		}
		else
		{
			check = false;
		}
	}


	double getHorsepower()
	{
		return Horsepower;
	}

	int getmaxValue()
	{
		return maxValue;
	}

	void Print()
	{
		if (check)
		{
			cout << "Лошадиные силы в норме!\n" << Horsepower;
		}
		else
		{
			cout << "Слишком много!\n" << Horsepower;
		}
	}


private:
	double Horsepower;
	int maxValue = 800;
	bool check;
};


int main()
{
	setlocale(LC_ALL, "ru");


	double userValue;
	cout << "Введите количество лошадиных сил: ";
	cin >> userValue;

	horsePowerCheck Check;

	Check.setHorsepower(userValue);
	Check.Print();

	return 0;
}