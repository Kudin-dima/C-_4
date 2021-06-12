#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int num, even = 0, odd = 0;
	cin >> num;

	while (num > 0)
	{
		if (num % 2 == 0)
			even += 1;
		else
			odd += 1;
		num /= 10;
	}

	cout << "Четных: " << even << "\nНечетных: " << odd;

	return 0;
}
