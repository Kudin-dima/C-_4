#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int Boxes, BoxCar;

	cout << "������� ���-�� ������ �� ������:\t";
	cin >> Boxes;

	for (int i = 1;; i++)
	{
		cout << "������� ������ ��������� � " << i << " ������:\t";
		cin >> BoxCar;

		Boxes -= BoxCar;
		if (Boxes < 0)
		{
			Boxes += BoxCar;
			cout << "�� �� ������ ��������� ������� ������. ������ ��������: " << Boxes << "\n";
			--i;
		}
		else
			cout << "������ ��������: " << Boxes << endl;

		if (Boxes == 0)
		{
			cout << "������ �����������";
			break;
		}
	}

	return 0;
}
