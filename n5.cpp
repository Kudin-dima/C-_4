#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int x, y;
	cout << "Введите натуральное число: ";
	cin >> x;

	y = x % 10;
	x = x / 10;

	while (x > 0)
	{
		if (x % 10 > y)
			y = x % 10;
		x /= 10;
	}
	cout << "Наибольшая цифра в вашем числе: " << y;

	return 0;
}
