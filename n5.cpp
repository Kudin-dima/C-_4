#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int x, y;
	cout << "������� ����������� �����: ";
	cin >> x;

	y = x % 10;
	x = x / 10;

	while (x > 0)
	{
		if (x % 10 > y)
			y = x % 10;
		x /= 10;
	}
	cout << "���������� ����� � ����� �����: " << y;

	return 0;
}
