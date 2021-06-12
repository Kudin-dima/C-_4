#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");	srand(time(0));	int rnum = rand() % 100;	int attempts = 1, num;	cout << "У Вас 10 попыток, чтобы угадать число\n";	while (attempts < 11)	{		cin >> num;		if (num > rnum)			cout << "надо меньше\n";		else if (num < rnum)			cout << "надо больше\n";		else if (num = rnum)		{			cout << "Число угадано!\n\n";			break;		}		cout << "Вы потратили " << attempts << " попыток\n";		++attempts;	}	if (attempts >= 10)		cout << "\n\nПопытки закончились, число не угадано.\nВерный ответ:\t" << rnum << "\n\n\n";	return 0;
}