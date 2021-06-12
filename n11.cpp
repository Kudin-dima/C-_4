#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int num, nf1 = 1, nf2 = 1, k;
	cin >> num;

	cout << nf1 << " " << nf2 << " ";

	for (int i = 2; i < num; i++)
	{
		cout << nf1 + nf2 << " ";
		k = nf1;
		nf1 = nf2;
		nf2 = k + nf1;
	}

	return 0;
}