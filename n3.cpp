#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");	int OpenDiap, EndDiap, oddnum = 0, oddsum = 0;	cout << "¬ведите начало диапазона : ";
	cin >> OpenDiap;
	cout << "\n¬ведите конец диапазона : ";
	cin >> EndDiap;	int i = OpenDiap;	while (OpenDiap <= EndDiap)	{		if (OpenDiap % 2 != 0)		{			cout << OpenDiap << "\n";			++oddnum;			oddsum += OpenDiap;		}		++OpenDiap;	}

	cout << oddnum << " нечетных чисел в сумме " << oddsum;

	return 0;
}