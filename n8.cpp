#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");	srand(time(0));	int rnum = rand() % 100;	int attempts = 1, num;	cout << "� ��� 10 �������, ����� ������� �����\n";	while (attempts < 11)	{		cin >> num;		if (num > rnum)			cout << "���� ������\n";		else if (num < rnum)			cout << "���� ������\n";		else if (num = rnum)		{			cout << "����� �������!\n\n";			break;		}		cout << "�� ��������� " << attempts << " �������\n";		++attempts;	}	if (attempts >= 10)		cout << "\n\n������� �����������, ����� �� �������.\n������ �����:\t" << rnum << "\n\n\n";	return 0;
}