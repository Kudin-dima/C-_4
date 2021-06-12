#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");	int n, a, b = 0;	cin >> n;	a = (n * (n + 1)) / 2;	cout << a;	for (int i = 1; i <= n; ++i)		b += i;	cout << "\n" << b;	return 0;
}