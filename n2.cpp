#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int Boxes, BoxCar;

	cout << "¬ведите кол-во €щиков на складе:\t";
	cin >> Boxes;

	for (int i = 1;; i++)
	{
		cout << "—колько €щиков погрузить в " << i << " машину:\t";
		cin >> BoxCar;

		Boxes -= BoxCar;
		if (Boxes < 0)
		{
			Boxes += BoxCar;
			cout << "¬ы не можете погрузить столько €щиков. ящиков осталось: " << Boxes << "\n";
			--i;
		}
		else
			cout << "ящиков осталось: " << Boxes << endl;

		if (Boxes == 0)
		{
			cout << "яблоки закончились";
			break;
		}
	}

	return 0;
}
