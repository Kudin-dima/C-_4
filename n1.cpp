#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int visitors, maxAge = 0, minAge = 1000, ageVisitor, sum = 0;

	cout << "¬ведите кол-во посетителей: ";
	cin >> visitors;

	for (int i = 1; i <= visitors; i++)
	{
		cout << "\n¬ведите возраст " << i << ":\t";
		cin >> ageVisitor;

		if (ageVisitor > maxAge)
			maxAge = ageVisitor;

		if (ageVisitor < minAge)
			minAge = ageVisitor;

		sum += ageVisitor;
	}

	cout << "\n—амый большой возраст: " << maxAge;
	cout << "\n—амый маленький возраст: " << minAge;
	cout << "\n—редний возраст: " << sum / visitors;

	return 0;
}