#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int visitors, maxAge = 0, minAge = 1000, ageVisitor, sum = 0;

	cout << "������� ���-�� �����������: ";
	cin >> visitors;

	for (int i = 1; i <= visitors; i++)
	{
		cout << "\n������� ������� " << i << ":\t";
		cin >> ageVisitor;

		if (ageVisitor > maxAge)
			maxAge = ageVisitor;

		if (ageVisitor < minAge)
			minAge = ageVisitor;

		sum += ageVisitor;
	}

	cout << "\n����� ������� �������: " << maxAge;
	cout << "\n����� ��������� �������: " << minAge;
	cout << "\n������� �������: " << sum / visitors;

	return 0;
}