#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int num, sum = 0, multipl = 1;
	cin >> num;

	while (num > 0)
	{
		int k = num % 10;
		sum += k;
		multipl *= k;
		num /= 10;
	}
	cout << "сумма " << sum << "\nпроизведение " << multipl;

	return 0;
}